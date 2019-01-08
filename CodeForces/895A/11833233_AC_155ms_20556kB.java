import java.lang.*;
import java.util.Scanner;
public class Main {
  public static int result(int array[], int n) {
//    int n = array.length();
//    int n = 6;
    int i = 0, j = 0, add = 0, sub = 0, dif =0, ans = 360;
    if (n == 1) return 360;
//    else (n == 2) return Math.abs(array[0] - array[1]);
    else {
      while(i < n) {
        add += array[i++];
        if (add - sub == 180) return 0;
        dif = Math.abs(360 - 2 * (add - sub));
        if (dif < ans) ans = dif;
//        System.out.println(ans);
        while(j < i && add - sub > 180) {
          sub += array[j++];
          if (add - sub == 180) return 0;
          dif = Math.abs(360 - 2 * (add - sub));
          if (dif < ans) ans = dif;
//          System.out.println(ans);
        }
      }
    }
    return ans;
  }
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int array[] = new int[n];
    for (int i = 0; i < n; i++) {
      array[i] = sc.nextInt();
    }
    System.out.println(result(array, n));
  }
}