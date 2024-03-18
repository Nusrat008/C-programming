#include <stdio.h>

int main() {
	int n[3][4]={{1,2,3,4},{10,20,30,40},{100,200,300,400}},s,i,j;
	printf("The num of table:\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d\n",n[j][i]);
		}
		printf("\n");
	}
	return 0;
}


