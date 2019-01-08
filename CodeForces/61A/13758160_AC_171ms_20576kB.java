import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String x = sc.next();
    String y = sc.next();
    int len = x.length();
    String ans = "";
    for (int i = 0; i < len; i++) {
      if (x.charAt(i) == y.charAt(i)) ans += '0';
      else ans += '1';
    }
    System.out.println(ans);
  }
}