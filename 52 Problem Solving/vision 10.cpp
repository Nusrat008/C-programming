#include <stdio.h>
int main()
{
	int marks;
	char grade;
	scanf("%d",&marks);
	if(marks>=70){
		grade='A';
		printf(" your is %c\n",grade);
	}
	else if(marks>=60){
		grade='B';
		printf(" your is %c\n",grade);
	} 
	else if(marks>=50){
		grade='C';
		printf(" your is %c\n",grade);
	}
	else {
		grade='D';
	printf(" your is %c\n",grade);	
	}
	return 0;
	
	
}
