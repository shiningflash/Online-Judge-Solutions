import java.util.Scanner;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (true) {
			int n = sc.nextInt();
			if (n == 0) break;
			int arr[] = new int[n];
			for (int i = 0; i < n; i++) arr[i] = sc.nextInt();
			Arrays.sort(arr);
			for (int i = 0; i < n-1; i++) System.out.print(arr[i] + " ");
			System.out.println(arr[n-1]);
		}
	}
}