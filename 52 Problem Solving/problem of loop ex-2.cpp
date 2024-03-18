#include <stdio.h>

int main() {
	int a,b,n,s,i,j;
	scanf("%d%d",&a,&b);
	if(b>a){
		n=b;
		b=a;
		a=n;
	}
	if(a%b==0){
		printf("%d\n",a);
	}
	else{
		for(i=a; ;i+=a){
			if(i%b==0){
				break;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}


