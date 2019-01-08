import java.util.Scanner;
public class Main {
	public static void main (String args[]) {
		Scanner sc = new Scanner (System.in);
		String s = sc.next();
		int length = s.length();
		char[] c = s.toCharArray();
		
		int cas = sc.nextInt();
		int i, j;
		for (i = 0; i < cas; i++) {
			String w = sc.next();
			int n = w.length();
			char[] ch = w.toCharArray();
			int flag = 1;
			for (j = 0; j < n; j++) {
				int x = 0;
				while (x < length) {
					if (ch[j] == c[x]) {
						flag = 1;
						break;
					}
					else {
						flag = 0;
					}
					x++;
				}
				if (flag == 0) {
					break;
				}
			}
			if (flag == 1)
				System.out.println("Yes");
			else
				System.out.println("No");
		}
	}
}
