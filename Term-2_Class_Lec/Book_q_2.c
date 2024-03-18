#include<stdio.h>

#include<math.h>

int main(){
	int y,p;
	float a,i,v;
	y = 1;
	printf("Enter amount , interest rate, preiod\n");
	scanf(" %f %f %d",&a,&i ,&p);
	printf("\n");
	
	while(y<=p){
		v = a + a * i;
		printf("%2d Rs %8.2f\n",y,v);
		y = y+1;
		a = v;
	}
	
	return 0;	
}
