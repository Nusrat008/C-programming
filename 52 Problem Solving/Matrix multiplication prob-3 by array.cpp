#include <stdio.h>

int main() {
	int a[3][3]={8,4,-1,0,1,3,5,4,8};
	int b[3][3]={-4,6,2,1,3,7,5,4,1};
	int i,j,k,sum,c[3][3];
	printf("Matrix A is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\n",a[i][j]);
		}
	}
	printf("\nMatrix B is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\n",b[i][j]);
		}
	}
	printf("\nMatrix A and B Multiplecation is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			sum=0;
			for(k=0;k<3;k++){
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			}
			printf("%d\n",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}


