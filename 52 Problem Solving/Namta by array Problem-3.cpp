#include <stdio.h>

int main() {
	int a,b,row,col,i,j,s,n[10][10],m;
	for(row=0;row<10;row++){
		for(col=0;col<10;col++){
			n[row][col]=(row +1)*(col + 1);
		}
	}
	for(row = 0;row<10;row++){
		for(col=0;col<10;col++){
			printf("%d * %d = %d\n",(row + 1),(col + 1),n[row][col]);
		}
		printf("\n"); 
	}
	return 0;
}


