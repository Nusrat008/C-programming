#include <stdio.h>

int main() {
	int in,out;
	scanf("%d",&in);
	while(in!=0){
		out=0;
		while(in!=0){
			out=out*10;
			out=out+in%10;
			in=in/10;
		}
		printf("%d\n",out);
		scanf("%d",&in);
	}
	return 0;
}


