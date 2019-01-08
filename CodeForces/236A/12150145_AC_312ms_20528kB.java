import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();
    int n = 0;
    int arr[] = new int[124];
    for(int i = 0; i < s.length(); i++) {
      //System.out.println(s.charAt(i));
      arr[(int) s.charAt(i)]++;
    }
    for (int i = 97; i < 123; i++) {
      if (arr[i] > 0) {
        n++;
      }
    }
    if (n % 2 == 0) {
      System.out.println("CHAT WITH HER!");
    }
    else {
      System.out.println("IGNORE HIM!");
    }
  }
}