import java.util.Scanner;
public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int row = 0, column = 0, ans = 0;
    int array[][]=new int[5][5];
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        array[i][j] = sc.nextInt();
        if (array[i][j] == 1) {
          column = i; row = j;
        }
      }
    }
    if (row > 2) row -= 2;
    else row = 2-row;
    if (column > 2) column -= 2;
    else column = 2-column;
    System.out.println(row + column);
  }
}