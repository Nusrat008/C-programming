#include<stdio.h>
int main(){
	
	double marks[5] = {90.7,89,90,97,95};
	int roll;
	for(roll=1;roll<=5;roll++){
		printf("Roll: %d  Marks:%lf\n",roll,marks[roll-1]);
	}
	return 0;

}
