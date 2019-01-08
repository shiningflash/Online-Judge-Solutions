import java.util.Scanner;
public class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = 0, su = 0, s = 0, ans1, ans2;
		int a[] = new int[n];
		int b[] = new int[n-1];
		int c[] = new int[n-2];
		for (int i = 0; i < a.length; i++) {
			a[i] = sc.nextInt();
			sum += a[i];
		}
		for (int i = 0; i < b.length; i++) {
			b[i] = sc.nextInt();
			su += b[i];
		}
		for (int i = 0; i < c.length; i++) {
			c[i] = sc.nextInt();
			s += c[i];
		}
		ans1 = sum - su;
		ans2 = su - s;
		System.out.println(ans1);
		System.out.println(ans2);
		
		sc.close();
	}
}