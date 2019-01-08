import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int a[] = new int[n];
    a[0] = sc.nextInt();
    int max = 1, k = 1;
    boolean flag = true;
    if (n > 1) {
      for (int i = 1; i < n; i++) {
        a[i] = sc.nextInt();
        k++;
        if (a[i] < a[i-1]) {
          k--;
          if (max < k) max = k;
          k = 1;
        }
      }
    }
    if(k > max) System.out.println(k);
    else System.out.println(max);
  }
}