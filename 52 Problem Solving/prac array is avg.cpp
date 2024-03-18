#include <stdio.h>
#include<math.h>
int main() {
	int num[10],diff_sum = 0,i,diff;
	double avg = 0;
	for(i = 0;i<10;i++){
		scanf("%d",&num[i]); 
	} 
	for(i = 0;i<10;i++){
		diff = abs(num[i]-num[i+1]);
		printf("%d\n",diff);
		diff_sum = diff_sum +diff;
	}
	printf("\n");
	avg = (double)diff_sum/9;
	printf("Averge of diff:%g\n",avg);
	return 0;
}


