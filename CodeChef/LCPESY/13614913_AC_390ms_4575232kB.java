import java.util.*;
import java.lang.*;
public class Main {
  public static int check(String x, String y) {
    int sum  = 0;
    int a[] = new int[123];
    int b[] = new int[123];
    int l1 = x.length();
    int l2 = y.length();
    boolean flag = false;
    for (int i = 0; i < l1; i++) {
      flag = false;
      for (char c = 'A'; c <= 'Z'; c++) {
        if (x.charAt(i) == c) {
          a[(int) c]++;
          flag = true;
          break;
        }
      }
      if (!flag) {
        for (char c = 'a'; c <= 'z'; c++) {
        if (x.charAt(i) == c) {
          a[(int) c]++;
          flag = true;
          break;
        }
      }
      }
      if (!flag) {
        for (int k = 0; k < 10; k++) {
          int ch = Character.getNumericValue(x.charAt(i));
          if (ch == k) {
            a[k]++;
            break;
          }
        }
      }
    }
    for (int i = 0; i < l2; i++) {
      flag = false;
      for (char c = 'A'; c <= 'Z'; c++) {
        if (y.charAt(i) == c) {
          b[(int) c]++;
          flag = true;
          break;
        }
      }
      if (!flag) {
        for (char c = 'a'; c <= 'z'; c++) {
          if (y.charAt(i) == c) {
            b[(int) c]++;
            flag = true;
            break;
          }
        }
      }
      if (!flag) {
        for (int k = 0; k < 10; k++) {
          int ch = Character.getNumericValue(y.charAt(i));
          if (ch == k) {
            b[k]++;
            break;
          }
        }
      }
    }
/*    for (int i = 0; i < 10; i++) {
      System.out.println(a[i]);
    }
    for (int i = 0; i < 10; i++) {
      System.out.println(b[i]);
    } */
    
    for (int i = 65; i <= 122; i++) {
      sum = sum + (Math.min(a[i], b[i]));
    }
//    System.out.println(sum);
    for (int l = 0; l < 10; l++) {
      sum = sum + (Math.min(a[l], b[l]));
    }
//    System.out.println(sum);
    return sum;
  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    for (int i = 0; i < t; i++) {
      String a = sc.next();
      String b = sc.next();

      int n = check(a, b);
      System.out.println(n);
    }
  }
}
