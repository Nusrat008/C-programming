#include <stdio.h>

int main() {
	int a,b,i;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		i=a;
	}
	else{
		i=b;
	}
	for( ; ;i++){
		if(i%a==0 && i%b==0){
			break;
		}
	}
	printf("%d\n",i);
	return 0;
}


