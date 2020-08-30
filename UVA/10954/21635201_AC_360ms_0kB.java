import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			int n = sc.nextInt();
			if (n == 0) break;
			PriorityQueue<Integer> pq = new PriorityQueue<Integer>();
			for (int i = 0; i < n; i++) {
				int m = sc.nextInt();
				pq.add(m);
			}
			int sum = 0;
			while (pq.size() > 1) {
				int u = pq.poll();
				int v = pq.poll();
				pq.add(u + v);
				sum += u + v;
			}
			System.out.println(sum);
		}
	}
}
