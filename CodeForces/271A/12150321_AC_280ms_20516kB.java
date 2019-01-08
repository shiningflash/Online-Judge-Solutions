import java.util.Scanner;
public class Main {
  public static void  main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int year = sc.nextInt();
    while(true) {
      String s = Integer.toString(++year);
      if (s.charAt(0) != s.charAt(1) && s.charAt(1) != s.charAt(2) && s.charAt(2) != s.charAt(3) && s.charAt(3) != s.charAt(0) && s.charAt(3) != s.charAt(1) && s.charAt(0) != s.charAt(2)) {
        break;
      }
    }
    System.out.println(year);
  }
}