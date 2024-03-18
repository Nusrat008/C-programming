#include <stdio.h>

int main() {
	int i,n[15],a,b=0,c,d,e;
	scanf("%d",&i);
	for(a=0;a<i;a++){
		scanf("%d",&n[a]);
	}
	for(a=0;a<i;a++){
		b=b+n[a];
	}
	c = b/i;
	printf("Mean is: %d",c);
	
	return 0;
}


