#include <stdio.h>
#include <conio.h>
void array2d(int array_name[][10],int n);
int main() {
	int nipu[1][10]={1,2,3,4,5,6,7,8,9,10};
	int romi[2][10]={{11,12,13,14,15,16,17,18,19,20},
	{21,22,23,24,25,26,27,28,29,30}};
	int ratna[3][10]={{1,2,3,4,5,6,7,8,9,10},
	{11,12,13,14,15,16,17,18,19,20},{21,22,23,24,25,26,27,28,29,30}};
	
	printf("\nElement of Nipu array...\n");
	array2d(nipu,1);
	printf("\nElement of Romi array...\n");
	array2d(romi,2);
	printf("\nElement of Ratna array...\n");
	array2d(ratna,3);
	return 0;
}
void array2d(int array_name[][10],int n){
	int x,y;
	for(x=0;x<n;x++){
		for(y=0;y<10;y++){
			printf("%2d",array_name[x][y]);
			printf("\n");
		}
		
	}
	getch();
}


