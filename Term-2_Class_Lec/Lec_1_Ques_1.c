/*Write a programme to output the following multiplication
5 * 1 =5
5 * 2 = 10
5 * 3 = 
*/


#include<stdio.h>

#include<math.h>

int main(){
	int y,p;
	float a,i,v;
	printf("Enter amount , interest rate, preiod\n");
	scanf(" %f %f %d",&a,&i ,&p);
	printf("\n");
	
    y = 1;

	while(y<=p){
		v = a + a * i;
		printf("%2d Rs %8.2f\n",y,v);
		y = y+1;
		a = v;
	}
	
	return 0;	
}

