#include<stdio.h>

long int GCD(long int a, long int b){
	int r;
	if(a==0)
		return b;
       else if (b==0)
                return a;
	do{
		r=a%b;
		a=b;
		b=r;
	} while(r!=0);

	return a;
}
int main(){
	int n;
	while(scanf("%d",&n)  !=  0) {
	    if (n == 0) break;
	    int i, j;
        long int gcd = 0;
		for(i=1; i<n; i++)
			for(j=i+1; j<=n; j++){
				gcd +=  GCD(j, i);
			}
		printf("%ld\n",gcd);
	}
	return 0;
}