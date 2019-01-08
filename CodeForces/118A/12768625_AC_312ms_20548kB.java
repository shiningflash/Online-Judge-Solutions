import java.util.Scanner;
import java.util.Arrays;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s2 = "";
    String s1 = sc.next();
    s1 = s1.toLowerCase();
    for (int i = 0; i < s1.length(); i++) {
      if (s1.charAt(i) == 'a' || s1.charAt(i) == 'o' || s1.charAt(i) == 'y' || s1.charAt(i) == 'e' || s1.charAt(i) == 'i' || s1.charAt(i) == 'u') {
//        s2 = s2 + "." + s1.charAt(i);
      }
      else s2 = s2 + "." + s1.charAt(i);
    }
    System.out.println(s2);
  }
}