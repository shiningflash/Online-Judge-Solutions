import java.util.Scanner;
import java.util.LinkedList;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		LinkedList<Integer> ll;
		while (true) {
			int n = sc.nextInt();
			if (n == 0) break;
			ll = new LinkedList<Integer>();
			for (int i = 1; i <= n; i++) ll.add(i);
			System.out.print("Discarded cards:");
			if (n <= 1) System.out.println();
			else {
				for (int i = n; i > 1; i--) {
					System.out.print(" " + ll.pollFirst());
					if (i <= 2) System.out.println();
					else System.out.print(",");
					ll.add(ll.pollFirst());
				}
			}
			System.out.print("Remaining card: ");
			if (n > 0) System.out.println(ll.get(0));
			else System.out.println(0);
		}
	}
}
