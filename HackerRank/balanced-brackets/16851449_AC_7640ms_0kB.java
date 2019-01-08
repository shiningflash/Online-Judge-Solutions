import java.util.Scanner;
public class Main {

	public static class Stack {
		int size, top;
		char Stack[];

		public Stack() { size = 10; Stack = new char[size]; top = -1; }
		public Stack(int sz) { size = sz; Stack = new char[size]; top = -1; }

		public boolean push(char ch) {
			if (!isFull()) { top++; Stack[top] = ch; return true; }
			return false;
		}
		public char pop() { return Stack[top--]; }
		public char peek() { return Stack[top]; }

		public boolean isEmpty() { return top == -1; }
		public boolean isFull() { return top == size-1; }
		public int top() { return top;	}
	}

	public static boolean Parenthesis_Matched(String str) {
		Stack p = new Stack(str.length());
		boolean flag = false;
		for (int k = 0; k < str.length(); k++) {
			if (str.charAt(k) == '[' || str.charAt(k) == '{' || str.charAt(k) == '(') {
				p.push(str.charAt(k));
				flag = true;
			}
			if (str.charAt(k) == ']' || str.charAt(k) == '}' || str.charAt(k) == ')') {
				if (p.isEmpty()) return false;
				else if (!maching_pair(p.pop(), str.charAt(k))) {
					return false;
				}
			}
		}
		return (p.isEmpty() && flag);
	}

	// matching top value with string index value
	private static boolean maching_pair(char a, char b) {
		if (a == '(' && b == ')') return true;
		else if (a == '{' && b == '}') return true;
		else if (a == '[' && b == ']') return true;
		return false;
	}

	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
		for (int l = 0; l < n; l++) {
			String str = sc.next();
			if (Parenthesis_Matched(str)) System.out.println("YES");
      else System.out.println("NO");
		}
	}
}