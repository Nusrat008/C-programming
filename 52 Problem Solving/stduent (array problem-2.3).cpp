#include<stdio.h>
int main(){
	int a,b,r,c,i,j,marks[4][5],col ;

	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
		printf("Enter Marks of a student:");
		scanf("%d",&marks[i][j]);
	}
	}
	for(col=0;col<5;col++){
		marks[3][col]=marks[0][col]/4 + marks[1][col]/4 + marks[2][col]/2;
	}
	for(col=0;col<5;col++){
		printf("Roll:%d , Total marks:%d\n",col+1,marks[3][col]);
	}
	
	return 0;
}
