#include <stdio.h>
int main(){
	int b,e ,m,phy,chem,bio,ict,sum;
	scanf("%d%d%d%d%d%d%d",&b,&e ,&m,&phy,&chem,&bio,&ict);
	printf("Enter Jony's final exams number in all subject:%d %d %d %d %d %d %d\n ",b,e ,m,phy,chem,bio,ict);
	sum = b + e + m + phy + chem + bio + ict;
	if(b>=80 && e >=80 &&  m>=80 && phy>=80 && chem>=80 && bio>=80 && ict>=40 && sum>=400){
		printf("Jony passed in the exam \n");
		printf("The total num of Jony is: %d",sum);
	}
	else{
		printf("Jony did not pass in the exam \n");
	}
	return 0;
}
