import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.next() + sc.next();
    int n = Integer.parseInt(s);
    boolean flag = true;
    for (int i = 0; i*i <= n; i++) {
      if (i*i == n) {
        flag = false;
      }
      if (i*i > n) {
        break;
      }
    }
    if (flag) System.out.println("No");
    else System.out.println("Yes");
  }
}