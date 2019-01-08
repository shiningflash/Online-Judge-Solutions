import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner (System.in);
    int n = sc.nextInt();
    for (int i = 0; i < n; i++) {
      String s = sc.next();
      char ch[] = s.toCharArray();
      if (ch.length <= 10) {
        System.out.println(s);
      }
      else {
        System.out.println(ch[0] +""+ (int)(ch.length-2) +""+ ch[ch.length-1]);
      }
    }
    sc.close();
  }
}