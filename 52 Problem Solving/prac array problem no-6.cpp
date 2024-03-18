#include <stdio.h>

int main() {
	int row=0,col=0,size=0,sumabove=0,sumbelow=0,matrix[5][5];
	printf("\n Matrix size:");
	scanf("%d",&size);
	printf("\nEnter Matrix Elements:\n");
	for(row=1;row<size+1;row++){
		for(col=1;col<size+1;col++){
		printf("Elements[%d][%d]:",row,col);
		scanf("%d",&matrix[row][col]);	
		}
		printf("\n");
	} 
	printf("\nThe given matrix is:\n");
	for(row=1;row<size+1;row++){
		for(col=1;col<size+1;col++){
			printf("%4d",matrix[row][col]);
		}
		printf("\n");
	}
	printf("\nDiagonal Elements Are:");
	for(row=1;row<size+1;row++){
		for(col=1;col<size+1;col++){
			if(row==col)
			printf("%4d",matrix[row][col]);
		}
	}
	printf("\nElements above the main diagonal:");
	for(row=1;row<size+1;row++){
		for(col=1;col<size+1;col++){
			if(row<col){
				printf("%4d",matrix[row][col]);
				sumabove+=matrix[row][col];
			}
		}
	}
	printf("\n Elements below the main diagonal:");
	for(row=1;row<size+1;row++){
		for(col=1;col<size+1;col++){
			if(row>col){
				printf("%4d",matrix[row][col]);
				sumbelow+=matrix[row][col];
			}
		}
	}
	printf("\n Sum of elements above the main diagonal:%d\n below 
the main diagonal:%d\n",sumabove,sumbelow);
	
	return 0;
}


