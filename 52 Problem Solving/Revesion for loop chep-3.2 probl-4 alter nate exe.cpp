#include <stdio.h>

int main() {
	int a,b,i,j;
	scanf("%d",&a);
	scanf("%d",&b);
	if(b>a){
		j=b;
		b=a;
		a=j;
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


