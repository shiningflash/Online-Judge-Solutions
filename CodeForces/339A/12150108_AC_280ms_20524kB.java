import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.next();
    int num[] = new int[(s.length() / 2) + 1];
    int i = 0;
    for(char ch: s.toCharArray()) {
      if (ch != '+') {
        num[i++] = Character.getNumericValue(ch);
      }
    }
    Arrays.sort(num);
    for(i = 0; i < num.length-1; i++) {
      System.out.print(num[i] + "+");
    }
    System.out.println(num[num.length-1]);
  }
}