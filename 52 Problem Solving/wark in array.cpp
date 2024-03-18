#include <stdio.h>

int main() {
	int num[5],i,j,x; 
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	for(j=4;j>0;j--){
		for(i=0;i<j;i++){
			if(num[i]>num[i+1]){ 
				x = num[i];
				num[i] =num[i+1];
				num[i+1]=x; 
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n",num[i]);
	}
	
	return 0;
}


