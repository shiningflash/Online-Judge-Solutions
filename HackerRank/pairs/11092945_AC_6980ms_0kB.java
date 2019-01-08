import java.util.Arrays;
import java.util.Scanner;

public class Main {
	
	public static int p(int[] a,int k) {
        Arrays.sort(a);
        int N = a.length;
		int count = 0;
		for (int i = 0; i < N - 1; i++)
		{
			int j = i + 1;
			while((j < N) && (a[j++] - a[i]) < k);
			j--;
			while((j < N) && (a[j++] - a[i]) == k)
				count++;			
		}

        return count;
    }

    public static void main(String[] args) {
    	
        Scanner sc = new Scanner(System.in);
        int res;
        
        String n = sc.nextLine();
        String[] n_split = n.split(" ");
        
        int s = Integer.parseInt(n_split[0]);
        int k = Integer.parseInt(n_split[1]);
        
        int[] a = new int[s];
        int a_item;
        String next = sc.nextLine();
        String[] next_split = next.split(" ");
        
        for(int a_i = 0; a_i < s; a_i++) {
            a_item = Integer.parseInt(next_split[a_i]);
            a[a_i] = a_item;
        }
        
        res = p(a,k);
        System.out.println(res);
        
        sc.close();
    }
}