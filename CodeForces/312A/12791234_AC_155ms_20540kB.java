import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String k = sc.nextLine();
    for (int i = 0; i < n; i++) {
      String s = sc.nextLine();
      char ch[] = s.toCharArray();
      boolean flag1 = false, flag2 = false;
      int len = ch.length;
      
      if (len > 4) {
        if (ch[0] == 'm') {
          if (ch[1] == 'i') {
            if (ch[2] == 'a') {
              if (ch[3] == 'o') {
                if (ch[4] == '.') {
                  flag1 = true;
                }
              }
            }
          }
        }
      }
      if (len > 4) {
        if (ch[len-5] == 'l') {
          if (ch[len-4] == 'a') {
            if (ch[len-3] == 'l') {
              if (ch[len-2] == 'a') {
                if (ch[len-1] == '.') {
                  flag2 = true;
                }
              }
            }
          }
        }
      }
      if (flag1 == true && flag2 == true) {
        System.out.println("OMG>.< I don't know!");
      }
      else if (flag1) {
        System.out.println("Rainbow's");
      }
      else if(flag2) {
        System.out.println("Freda's");
      }
      else {
        System.out.println("OMG>.< I don't know!");
      }
    }
  }
}