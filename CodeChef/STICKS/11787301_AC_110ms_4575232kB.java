import java.util.Scanner;
import java.util.Arrays;
public class Main {
	public static void main (String args[]) {
		Scanner sc = new Scanner (System.in);
		int cas = sc.nextInt();
		for (int i = 0; i < cas; i++) {
			int num = sc.nextInt();
			int len[] = new int[num];
			for (int j = 0; j < num; j++) {
				len[j] = sc.nextInt();
			}
			Arrays.sort(len);
			int p = len[num-1];
			int t = 0, res = 1;
			for (int j = num-2; j >= 0; j--) {
				if (len[j] == p) {
					t++;
					res = res * p;
					if (t == 2) {
						break;
					}
					p = -1;
				}
				else {
					p = len[j];
				}
			}
			if (t == 2) {
				System.out.println(res);
			}
			else {
				System.out.println(-1);
			}
		}
	}
}
