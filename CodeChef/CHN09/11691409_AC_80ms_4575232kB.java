import java.util.Scanner;

public class Main {
	public static int tester(String p, char ch){
        char[] ch1 = p.toCharArray();
        int n = 0;
        for(char c : ch1){
            if(c == ch)
                n++;
        }
        return n;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        String s = sc.nextLine();
        int c = Integer.parseInt(s);
        while(c-- > 0){
            s = sc.nextLine();
            int a = s.length() - tester(s, 'a');
            int b = s.length() - a;
            if (a <= b) {
            	System.out.println(a);
            }
            else {
            	System.out.println(b);
            }
        }
    }
}
