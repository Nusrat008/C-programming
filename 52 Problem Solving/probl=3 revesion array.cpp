#include <stdio.h>

int main() {
	int a[3],b,stdu[6][3],n,i,j;
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			scanf("%d",&stdu[i][j]);
			stdu[5][i]+=stdu[i][j];
			
		}
		a[i]=stdu[5][i]/5;
	}
	
	for(i=0;i<3;i++){
		
		printf("Average num: %d\n",a[i]);
	}
	return 0;
}



