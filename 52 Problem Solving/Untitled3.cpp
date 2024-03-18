  #include <stdio.h>
int main(){
	int b,e ,m,phy,chem,bio,ict;
	scanf("%d%d%d%d%d%d%d",&b,&e ,&m,&phy,&chem,&bio,&ict);
	printf("Enter Jony's final exams number in all subject:%d %d %d %d %d %d %d ",b,e ,m,phy,chem,bio,ict);
	if(b>=40 && e >=40 &&  m>=40 && phy>=40 && chem>=40 && bio>=40 && ict>=40){
		printf("Jony passed in the exam ");
	}
	else{
		printf("Jony did not pass in the exam ");
	}
	return 0;
}
