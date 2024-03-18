#include <stdio.h>

int main() {
	int namta[10][10],i,j,a,m=0,r,sum=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			namta[i][j]=(i+1)*(j+1);
			
		}
	} 
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d * %d = %d\n",i+1,j+1,namta[i][j]);
			a+=namta[i][j];
			if(namta[i][j]%2==0){
			sum=sum+1;
			}
			else {
			m=m+1;
			}
			
		}
		printf("\n");
	}
	printf("Total even num: %d\n",sum);
	printf("Total odd num: %d\n",m);
	printf("Sum of total num: %d\n",a);
	return 0;
}


