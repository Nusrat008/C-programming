#include <stdio.h>
int main() {
	 int a[2][2]={5,4,4,4};
	 int b[2][2]={6,7,4,8};
	 int c[2][2],i,j,t,sum,k;
	 printf("Matrix A is:\n");
	 for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		printf("%d\t",a[i][j]);
	 		printf("\n");
		 }
	 }
	 printf("\n Matrix B is:\n");
	 for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		printf("%d\n",b[i][j]);
		 }
	 }
	 printf("\nMultiplication of A and B is:\n");
	 for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		sum=0;
	 		for(k=0;k<2;k++)
	 			sum=sum+a[i][k]*b[k][j];
	 			c[i][j]=sum;
	 			printf("%d\n",c[i][j]);
		}
		 printf("\n");
	 }
	return 0;
}


