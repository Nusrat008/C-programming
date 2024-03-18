#include <stdio.h>

int main() {
	int a,b,i,j,n=0;
	for(i=1;i<300;i++){
		a=7*i;
		if(a%2==0){
			n=n+1;
			printf("The even num :%d\n",a);
		}
		if(n>=100){
			break;
		}

	}
	printf("Total num:%d",n);
	return 0;
}


