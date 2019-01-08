import java.util.Scanner;
import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.next();
    char ch[] = s.toCharArray();
    boolean flag = true;
    int len = ch.length;
    int k = 0;
    for (int i = 1; i < len; i++) {
      if (ch[i] <= 'Z') {
        k++;
      }
    }
    if (k == (len-1)) {
      for (int i = 0; i < ch.length; i++)
        if (ch[i] <= 'Z')
          ch[i] = Character.toLowerCase(ch[i]);
        else
          ch[i] = Character.toUpperCase(ch[i]);
    }
    System.out.println(String.valueOf(ch));
    sc.close();
  }
}