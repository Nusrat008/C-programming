#include <stdio.h>

int main() {
	int a,b,stdu[6][3],n,i,j;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			scanf("%d",&stdu[i][j]);
			stdu[5][i]+=stdu[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		a=stdu[5][i]/5;
		printf("Average num: %d\n",stdu[5][i]);
	}
	return 0;
}


