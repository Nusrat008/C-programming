#include <stdio.h>

int main() {
	int a,b,s,n,i,j;
	scanf("%d%d",&a,&b);
	if(b>a){
		n=b;
		b=a;
		a=n;
	}
	if(a%b==0){
		printf("%d",a);
	}
	else{
		for(i=a; ;i+=a){
			if(i%b==0){
				break;
			}
		}
		printf("%d",i);
	}
	return 0;
}


