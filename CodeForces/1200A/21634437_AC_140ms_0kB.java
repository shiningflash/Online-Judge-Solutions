import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String s = sc.next();
		int a[] = new int[15];
		
		for (int i = 0; i < n; i++) {
			char ch = s.charAt(i);
			if (ch == 'L') {
				for (int j = 0; j <= 9; j++) {
					if (a[j] == 0) {
						a[j] = 1;
						break;
					}
				}
			}
			else if (ch == 'R') {
				for (int j = 9; j >= 0; j--) {
					if (a[j] == 0) {
						a[j] = 1;
						break;
					}
				}
			}
			else {
				a[ch - '0'] = 0;
			}
		}
		
		for (int i = 0; i <= 9; i++) System.out.print(a[i]);
		System.out.println();
	}
}