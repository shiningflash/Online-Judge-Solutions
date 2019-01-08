import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int lemon = sc.nextInt();
		int apple = sc.nextInt();
		int pear = sc.nextInt();
		int a = 0, b = 0, c = 0, sum  = 0;
		
		while(true) {
			if (a <= lemon && b <= apple && c <= pear) {
				sum = a + b + c;
				a += 1;
				b += 2;
				c += 4;
			}
			else 
				break;
		}
		System.out.println(sum);
	}
}