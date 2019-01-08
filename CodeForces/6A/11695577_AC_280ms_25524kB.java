import java.util.Scanner;
import java.util.Arrays;
public class Main {
  public static void main (String[] args) {
    Scanner sc = new Scanner (System.in);
    int len[] = new int[4];
    for (int i = 0; i < 4; i++) {
      len[i] = sc.nextInt();
    }
    Arrays.sort(len);
    int d1 = len[0] + len[1] - len[2];
    int d2 = len[1] + len[2] - len[3];
    if (d1 > 0 || d2 > 0) System.out.println("TRIANGLE");
    else if (d1 == 0 || d2 == 0) System.out.println("SEGMENT");
    else System.out.println("IMPOSSIBLE");
    sc.close();
  }
}