import java.util.Scanner;

public class Main { 
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        String s = "abcdefghijklmnopqrstuvwxyz";
        char[] c1 = s.toCharArray();
        String input;
        input = sc.next();
        char[] c2 = input.toCharArray();
        char ch;
        int i, j, flag=0;
        
        for (; t > 0; t--) {
            String s1 = sc.next();
            char c[] = s1.toCharArray();
            
            for(i = 0; i < s1.length(); i++) {
                ch = c[i];
                if(ch >= 'A' && ch <= 'Z') {
                    flag = 1;
                    ch = (char)(ch + 32); 
                }
                
                if(ch == '_') {
                    System.out.print(' ');
                }
                else if(ch >= 'a' && ch <= 'z') {
                    for(j = 0; j < 26; j++) {
                       
                        if( ch == c1[j]) {
                            if(flag == 1) {    
                                
                                System.out.print((char)(c2[j] - 32));
                            }
                            else {
                                System.out.print(c2[j]);
                            }
                            flag = 0;
                            break;
                        }
                    }
                }   
                else {
                    System.out.print(ch);
                }
            }
            System.out.println();
        }
        sc.close();
    }
}