#include <stdio.h>

int main() {
	int a,b,t,i;
	scanf("%d%d",&a,&b);
	if(b>a){
		t = b;
		b =a;
		a=t;
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


