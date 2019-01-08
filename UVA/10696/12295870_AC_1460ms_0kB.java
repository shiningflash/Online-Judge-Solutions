import java.util.Scanner;
public class Main {
  public static int f91(int n) {
    int ans = 0;
    if(n <= 100) {
      ans = f91(f91(n+11));
    }
    else if (n >= 101) {
      ans = n-10;
    }
    return ans;
  }
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n;
    while((n = sc.nextInt()) != 0) {
      int ans = f91(n);
      System.out.println("f91(" + n + ") = " + ans);
    }
  }
}