#include <stdio.h>

int main() {
	 int a,b,col,row,i,j,sum[5]={0},n[5][5]={{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}},m;
	 for(row=0;row<5;row++){
	 	for(col=0;col<5;col++){
	 		sum[row]+=n[col][row];
		 }
	 	
	 }
	 for(row=0;row<5;row++){
	 	printf("Sum of row %d: %d\n",row+1,sum[row]);
	 }
	return 0;
}


