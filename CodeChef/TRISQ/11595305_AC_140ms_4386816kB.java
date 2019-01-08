import java.util.Scanner;
public class Main {
	
	static int sqnum(int n) {
		int ans = 0;
		while (n > 2) {
			ans += (n-2) / 2;
			n -= 2;
		}
		return ans;
	}
	
	public static void main (String[] args) {
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			int ans = sqnum(n);
			System.out.println(ans);
		}
		
		sc.close();
	}
}
