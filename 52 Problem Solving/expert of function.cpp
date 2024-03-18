#include <stdio.h>
int small(int a, int b){
	int tem;
	if(a<b){
		tem = a;
	}
	else{
		tem = b;
	}
	return tem;
}
int main() {
	int a,b,c,sm;
	scanf("%d%d%d",&a,&b,&c);
	sm = small(a,b);
	int re = small(sm,c);
	printf("The smaller is %d",re);
	
	
	return 0;
}


