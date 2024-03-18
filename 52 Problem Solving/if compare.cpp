#include <stdio.h>
int main(){
	int alam,karim,cow1,cow2,cow3;
	scanf("%d%d%d",&cow1,&cow2,&cow3);
	alam = cow1+cow2+cow3;
	scanf("%d%d%d",&cow1,&cow2,&cow3);
	karim = cow1+cow2+cow3;
	if(alam>karim){
		printf("Alam\n");
	}
	else{
		printf("Karim\n");
	}
		
	
	return 0;
}
