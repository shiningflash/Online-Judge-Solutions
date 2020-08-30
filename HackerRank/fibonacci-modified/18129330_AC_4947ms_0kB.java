import java.math.BigInteger;
import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		BigInteger a = new BigInteger(sc.next());
		BigInteger b = new BigInteger(sc.next());
		BigInteger c = null;
		int n = sc.nextInt(), cnt = 2;
		while (n != cnt) {
			c = a.add(b.multiply(b));
			a = b; b = c; cnt++;
		}
		System.out.println(c);
	}
}