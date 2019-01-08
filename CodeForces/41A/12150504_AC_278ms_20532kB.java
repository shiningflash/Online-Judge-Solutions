import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.next();
    String k = sc.next();
    int j = 0;
    boolean ans = true;
    for (int i = s.length()-1; i >= 0; i--) {
      if(s.charAt(i) != k.charAt(j++)) {
        ans = false;
        break;
      }
    }
    if (ans)
      System.out.println("YES");
    else
      System.out.println("NO");
  }
}