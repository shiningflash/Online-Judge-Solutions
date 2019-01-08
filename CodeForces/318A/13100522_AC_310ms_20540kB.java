import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner (System.in);
    long n = sc.nextLong();
    long k = sc.nextLong();
    if (k <= (n+1)/2) {
      System.out.println(2*k-1);
    }
    else {
      if (n % 2 == 0) {
        System.out.println((k-(n/2))*2);
      }
      else {
        System.out.println((k-(n/2)-1)*2);
      }
    }
  }
}