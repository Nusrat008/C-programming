#include <stdio.h>

int main() {
	int maths[2][5];
	int c,r;
	for(c=0;c<2;c++){
		for(r=0;r<5;r++){
			scanf("%d",&maths[c][r]);
		}
	}
	for(c=0;c<2;c++){
		for(r=0;r<5;r++){
			printf("Class %d Roll %d Marks %d\n",c+6,r+1,maths[c][r]);
				
		}
	}
	
	return 0;
}


