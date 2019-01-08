import java.util.Scanner;
import java.util.Arrays;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s1 = sc.next();
    String s2 = sc.next();
    int len1 = s1.length();
    int len2 = s2.length();
    int a = 0, b = 0;
    int flag = 0;
//    if (s1.equals(s2)) flag = 0;
//    else {
      s1 = s1.toLowerCase();
      s2 = s2.toLowerCase();
      for (int i = 0; i < len1; i++) {
        if (s1.charAt(i) > s2.charAt(i)) {
          flag = 1;
          break;
        }
        else if (s1.charAt(i) < s2.charAt(i)) {
          flag = -1;
          break;
        }
      }
//    }
     System.out.println(flag);
  }
}