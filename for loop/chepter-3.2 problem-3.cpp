#include <stdio.h>

int main() {
	int a,b;
	int num,i,j;
	scanf("%d%d",&a,&b);
	num=a%b;
	while(num!=0){
		a=b;
		b=num;
		num=a%b;
	}
	printf("The gcd is :%d\n",b);
	return 0;
}


