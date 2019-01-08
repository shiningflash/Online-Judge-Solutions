import java.util.*;
public class Main{
	
	// notify me if you don't understand this method
	static int sum(int n) {
		int sum = 0, val = 0, rem = 0;
		while (n != 0) {
			sum += (n % 10);
			n /= 10;
		}
		if (sum > 9) sum = sum(sum);
		return sum;
	}
	
    public static void main (String [] args){
        Scanner sc = new Scanner (System.in );
//        int tCase = sc.nextInt();
        
        while(sc.hasNext()) {	// hasNext() needed as input required end of file
            String str1 = sc.nextLine();
            char [] c1 = str1.toCharArray();
            int sum1=0;
            int sum2=0;
            double ans = 1;
            for (int y = 0; y< c1.length; y++){
                int q =(int) str1.charAt(y);
                if ((q>=97)&&(q<=122)){
//                    q-=96;	// needed change here, you have to mimus 96, insted of 98
                    sum1 += (q - 96);
                }
                else if ((q>=65)&&(q<=90)) {
//                    q-=64;	// it's ok
                    sum1 += (q - 64);
                }
            } 
            String str2 = sc.nextLine();
            char [] c2 = str2.toCharArray();
            
            for (int y = 0; y< c2.length; y++){
                int  q =(int) str2.charAt(y);
                if ((q>=97)&&(q<=122)){
                    q-=96;	// again mistake here
                    sum2+=q;
                }
                else if ((q>=65)&&(q<=90)) {
                    q-=64;
                    sum2+=q;
                }
            } 
            
            // here, you have to find out sum of digit first
            // continue it until it became a one digit number
            
            double a = sum(sum1) * 1.0;
            double b = sum(sum2) * 1.0;
//            System.out.println(a + " " + b);
            
            if (a > b) {
                ans = (b * 100.00) / a;
            }
            else {
                ans = (a * 100.00) / b;
            }
            System.out.printf("%.2f %%\n", ans);
        }
    }
}