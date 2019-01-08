import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner (System.in);
    int t = sc.nextInt();
    int n = sc.nextInt();
    int m = sc.nextInt();
    int sum = n + m;
    int max = sum;
    for (int i = 0; i < t-1; i++) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      sum = sum - a + b;
      if (max < sum)
        max = sum;
    }
    System.out.println(max);
    sc.close();
  }
}