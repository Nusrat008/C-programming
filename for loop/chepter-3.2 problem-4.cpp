#include <stdio.h>

int main() {
	int a,b,tem,num,i,j;
	scanf("%d%d",&a,&b);
	if(b>a){
		num=b;
		b=a;
		a=num;
	}
	if(a%b==0){
		printf("LCM is :%d\n",a);
	}
	else{
		for(i=a; ; i+=a){
			if(i%b==0){
				break;
			}
		}
		printf("LCM is :%d\n",i);
	}
	return 0;
}


