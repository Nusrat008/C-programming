#include <stdio.h>

int main() {
	int max,min,n,num,i,j;
	scanf("%d",&n);
	scanf("%d",&num);
	max=min=num;
	for(i=1;i<n;i++){
		scanf("%d",&num);
		if(num>max)max=num;
		if(num<min)min=num;
	}
	printf("maximum:%d\n",max);
	printf("minimum:%d\n",min);
	return 0;
}


