
import java.util.Scanner;
public class Main {
	
	static int count(int n) {
		int count = 1;
		while(n > 1) {
			if (n % 2 != 0) n = 3 * n + 1;
			else n = n / 2;
			count++;
		}
		return count;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNextInt()) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			
			int x, y;
			if (a > b) {	// swap if first is greater than the second
				x = b; y = a;
			}
			else {
				x = a; y = b;
			}
			
			int max = 1, count;
			for (int i = x; i <= y; i++) {
				count = count(i);
				
				if (count > max) {
					max = count;
				}
			}
			System.out.println(a + " " + b + " " + max);
		}
		sc.close();
	}
}
