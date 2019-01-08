import java.util.Scanner;
import java.util.LinkedList;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		LinkedList <Integer> l;
		int n, a, b;
		while (true) {
			n = sc.nextInt();
			if (n == 0) break;
			l = new LinkedList<Integer>();
			for (int i = 1; i <= n; l.add(i), i++);
			System.out.print("Discarded cards:");
			if (n <= 1) System.out.println();
			else {
				for (a = n; a > 1; a--) {
					System.out.print(" " + l.pollFirst() + (a <= 2 ? "\n" : ","));
					l.add(l.pollFirst());
				}
			}
			System.out.println("Remaining card: " + (n > 0 ? l.get(0) : 0));
		}
	}
}