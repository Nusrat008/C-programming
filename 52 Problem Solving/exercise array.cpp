#include <stdio.h>

int main() {
	int i,num[5],x;
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<4;i++){
		if(num[i]>num[i+1]){
			x=num[i];
			num[i]=num[i+1];
			num[i+1]=x;
		}
	}
	for(i=0;i<3;i++){
		if(num[i]>num[i+1]){
			x = num[i];
			num[i]=num[i+1];
			num[i+1]=x;
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n",num[i]);
}
	
	return 0;
}


