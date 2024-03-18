#include <stdio.h>

int main() {
	int a,b,num;
	scanf("%d%d",&a,&b);
	num=a%b;
	while(num!=0){
		a=b;
		b=num;
		num=a%b;
	}
	printf("GCD is %d\n",b);
	
	return 0;
}


