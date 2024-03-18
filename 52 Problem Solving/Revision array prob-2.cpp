#include <stdio.h>

int main() {
	int a,num[3][3],i,j,d,s[3]={0};
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter sub num:");
			scanf("%d",&num[i][j]);
			s[i]=s[i] + num[i][j];
		}
	}
	for(i=0;i<3;i++){
		printf("student %d :%d\n",i+1,s[i]);
	}
	return 0;
}


