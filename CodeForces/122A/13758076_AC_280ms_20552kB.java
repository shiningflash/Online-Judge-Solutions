import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int lucky[] = {4, 7, 44, 47, 444, 447, 474, 477, 744, 747, 774, 777};
    int n = sc.nextInt();
    int len = lucky.length;
    boolean flag = false;
    for (int i = 0; i < len; i++) {
      if (n % lucky[i] == 0) {
        flag = true;
        break;
      }
    }
    if (flag) System.out.println("YES");
    else System.out.println("NO");
  }
}