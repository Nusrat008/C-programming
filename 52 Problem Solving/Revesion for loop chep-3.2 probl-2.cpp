#include <stdio.h>

int main() {
	int i,n,m,j;
	for(i=1;i<=100;i++){
		if(i%2==0 && i%3==0 && i%5==0){
			printf("%d\n",i);
		}
	}
	return 0;
}


