import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Lumberjacks:");
    int t = sc.nextInt();
    for (int k = 0; k < t; k++) {
      int a = sc.nextInt();
      int b = sc.nextInt();
      int flag = 0;
      
      if ( a >= b) {
        a=b;
        for (int i = 2; i < 10; i++) {
          b = sc.nextInt();
          if (a >= b) {
            flag++;
//            System.out.println(flag);
          }
          a=b;
        }
      }
      
      else if ( a <= b) {
        a=b;;
        for (int i = 2; i < 10; i++) {
          b = sc.nextInt();
          if (a <= b) {
            flag++;
//            System.out.println(flag);
          }
          a=b;
        }
      }
      if (flag == 8) System.out.println("Ordered");
      else System.out.println("Unordered");
    }
  }
}