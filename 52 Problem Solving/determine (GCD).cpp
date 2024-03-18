#include <stdio.h>

int main() {
	int a,b,n,i,j,t,g,x;
		scanf("%d %d",&a,&b);
		if(a==0) t = a;
		else if(b==0)t=b;
		else{
			while(b!=0){
				t = b;
				b = a%b;
				a=t;
			}
			t = a; 
		}
		printf("GCD is %d\n",t); 
	return 0;
}


