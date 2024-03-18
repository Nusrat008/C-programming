#include <stdio.h>

int main() {
	int a,b,s,sum=0,n,i,j,c,ok;
	int grid[9][9];
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
		scanf("%d",&grid[i][j]);
	    }
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			sum+=grid[i][j];
		}
		if(sum!=45){
			ok=0;
		}
	}
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			sum+=grid[j][i];
			if(sum!=45){
				ok=0;
			}
		}
	}
	 for(i=1;i<=7;i++){
	 	for(j=1;j<=7;j++){
	 		sum=grid[i-1][j-1]+grid[i-1][j]+grid[i-1][j+1];
	 		sum+=grid[i][j-1]+grid[i][j]+grid[i][j+1];
	 		sum+=grid[i+1][j-1]+grid[i+1][j]+grid[i+1][j+1];
	 		if(sum!=45){
	 			ok=0;
			 }
		 }
	 }
	 for(i=0;i<9;i++){
	 	for(j=0;j<9;j++){
	 		n=grid[i][j];
	 		if(n<1||n>9){
	 			ok=0;
			 }
		 }
	 }
	 
    if(ok=0){
    	printf("wrong");
	
	}
	else{
		printf("correct");
	}
	return 0;
}


