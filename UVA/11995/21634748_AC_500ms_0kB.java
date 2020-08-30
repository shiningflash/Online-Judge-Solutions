import java.util.Stack;
import java.util.Queue;
import java.util.ArrayDeque;
import java.util.Collections;
import java.util.PriorityQueue;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Stack<Integer> s = new Stack<Integer>();
		Queue<Integer> q = new ArrayDeque<Integer>();
		PriorityQueue<Integer> pq = new PriorityQueue<Integer>(10, Collections.reverseOrder());
		
		while (sc.hasNext()) {
			int n = sc.nextInt();
			s.clear();
			q.clear();
			pq.clear();
			int a = 1, b = 1, c = 1;
			for (int i = 0; i < n; i++) {
				int y = sc.nextInt();
				int z = sc.nextInt();
				if (y == 1) {
					s.push(z);
					q.add(z);
					pq.add(z);
				}
				else if (s.size() == 0) a = b = c = 0;
				else {
					if (s.pop() != z) a = 0;
					if (q.poll() != z) b = 0;
					if (pq.poll() != z) c = 0; 
				}
			}
			int sum = a + b + c;
			if (sum > 1) System.out.println("not sure");
			else if (sum == 0) System.out.println("impossible");
			else if (a == 1) System.out.println("stack");
			else if (b == 1) System.out.println("queue");
			else System.out.println("priority queue");
		}
	}
}