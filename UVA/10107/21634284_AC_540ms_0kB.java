import java.util.Scanner;
import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ArrayList <Integer> arr = new ArrayList<Integer>();
		
		if (sc.hasNext()) arr.add(sc.nextInt());
		System.out.println(arr.get(0));
		
		while (sc.hasNext()) {
			int x = sc.nextInt(), i = 0;
			while (i != arr.size() && x < arr.get(i)) i++;
			arr.add(i, x);
			int sz = arr.size();
			if (sz % 2 == 1) System.out.println(arr.get(sz / 2));
			else System.out.println((arr.get(sz / 2 - 1) + arr.get(sz / 2)) / 2);
		}
	}
}