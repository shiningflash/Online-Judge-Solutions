import java.util.Scanner;
public class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int i, n, num;
		n = sc.nextInt();
		int a[] = new int[1000002];
		for (i = 0; i < n; i++) {
			num = sc.nextInt();
			a[num]++;
		}
		for (i = 0; i < 1000002; i++) {
			while (a[i] > 0) {
				System.out.println(i);
				a[i]--;
			}
		}
	}
}
