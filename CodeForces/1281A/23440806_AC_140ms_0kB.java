import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for (int i = 0; i < n; i++) {
			String s = sc.next();
			if (s.endsWith("po")) System.out.println("FILIPINO");
			else if (s.endsWith("desu") || s.endsWith("masu")) System.out.println("JAPANESE");
			else if (s.endsWith("mnida")) System.out.println("KOREAN");
		}
	}
}