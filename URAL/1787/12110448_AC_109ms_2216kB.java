import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int k = sc.nextInt();
    int n = sc.nextInt();
    int sum = 0;
    for(int i = 0; i < n; i++) {
      int m = sc.nextInt();
      sum += m;
      sum -= k;
      if (sum < 0) {
      sum = 0;
    }
    }
    System.out.println(sum);
  }
}