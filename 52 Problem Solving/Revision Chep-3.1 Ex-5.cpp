#include <stdio.h>

int main() {
	int s,b;
	char a;
	scanf("%c",&a);
	while(scanf("%c",&a) && a!='\n'){
		s += a -'0';
		b=b+s;
	}
	printf("Sum is : %d",b);
	
	return 0;
}


