#include <stdio.h>

int main() {
	int math[3]={1,5,9};
	int x = 87;
	math[2]=math[1]; 
	math[1]=x;
	printf("%d %d %d ",math[0],math[1],math[2]);
	
	
	return 0;
}


