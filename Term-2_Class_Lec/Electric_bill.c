#include<stdio.h>

int main(){
	int un;
	char name[10];
	float c;
	printf("Enter user name of \n");
	scanf("%s",name);
	printf("\nEnter total units consumed\n");
	scanf("%d",&un);
	if(un>=0 && un<=200)
		c = 100 + (un *0.80);
	else if(un>200 && un<=300){
		c = 100 + (un *0.90);
		}
	else if(un>300 && un<=400){
		c = 100 + un ;
		}
		else{
			c = (100 + un)+(100 + un)*.15;
		}
		printf("Name\tunits\tCharge\n");
		printf("%s\t%d\t%.2f",name,un,c);
		
	
	
	return 0;
}


