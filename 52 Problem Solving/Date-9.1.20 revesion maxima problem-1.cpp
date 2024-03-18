#include <stdio.h>

int main() {
	int max ,min,i,a,j,n,num;
	scanf("%d",&n);
	scanf("%d",&num);
	max=min=num;
	for(i=1;i<n;i++){
		scanf("%d",&num);
		if(num>max)max=num;
		if(num<min)min=num;
	}
	printf("The maxima is :%d\n",max);
	printf("The minima is:%d\n",min);
	return 0;
}


