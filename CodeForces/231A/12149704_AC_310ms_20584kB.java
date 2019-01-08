import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int contest = sc.nextInt();
    int num = 0;
    for(int i= 0; i < contest; i++) {
       int n = sc.nextInt() + sc.nextInt() + sc.nextInt();
       if (n >= 2) num++;
    }
    System.out.println(num);
    sc.close();
  }
}