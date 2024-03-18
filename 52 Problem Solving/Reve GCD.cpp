#include <stdio.h>

int main() {
	int a,s,b,n;
	scanf("%d %d",&a,&b);
	n=a%b;
	while(n!=0){
		a=b;
		b=n;
		n=a%b;
	}
	printf("%d\n",b);
	
	return 0;
}


