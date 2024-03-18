#include <stdio.h>
#include <conio.h>


void drawboard(){
	int i,j,gameboard[3][3],validatainput;
	printf("\n tic tac toe");
	printf("\n digitd(1-9)indicates valid cell num\n");
	printf("\n %c | %c | %c",gameboard[0][0],gameboard[0][1],gameboard[0][2]);
	printf("\n ---|---|---");
	printf("\n %c | %c | %c",gameboard[1][0],gameboard[1][1],gameboard[1][2]);
	printf("\n ---|---|---");
	printf("\n %c | %c | %c",gameboard[2][0],gameboard[2][1],gameboard[2][2]);
}
void turnplayero(int *pcell)
{
	int cell;
	do{
		printf("\n player o,\n select valid cell num:");
		scanf("%d",&cell);
		
	}while(0==validatainput(cell));
	*pcell=cell;
}
void turnplayerx(int *pcell)
{
	int cell;
	do{
		printf("\n player x,\n select valid cell num:");
		scanf("%d",&cell);
		
	}while(0==validatainput(cell));
	*pcell=cell;
}
void getrowcol(int cell,int *px,int *py){
	*px=(cell-1)/3;
	*py=(cell-1)%3;
}
int valildateinput(int cell){
	int row,col;
	if((cell<1)||(cell>9))
	return 0;
	getrowcol(cell,&row,&col);
	if(('o'==gameboard[row][col])||('x'==gameboard[row][col]))
	{ 
	  return 0;
	}
	return 1;
	}
	int showresult(char ch){
		int status=0;
		if(gameboard[0][0]==ch && gameboard[1][1]==ch && gameboard[2][2]==ch){
			printf("\n player %c is winner",ch);
			status=1;
		} 
		else if(gameboard[0][2]==ch && gameboard[1][1]==ch && gameboard[2][0]==ch)
		{
			printf("\n player %c is winner",ch);
			status=1;
		}
		else if(gameboard[0][0]==ch && gameboard[1][0]==ch && gameboard[2][0]==ch)
			{
			printf("\n player %c is winner",ch);
			status=1;
		}	
		else if(gameboard[1][0]==ch && gameboard[1][1]==ch && gameboard[1][2]==ch)
			{
			printf("\n player %c is winner",ch);
			status=1;
		}
		else if(gameboard[2][0]==ch && gameboard[2][1]==ch && gameboard[2][2]==ch)
			{
			printf("\n player %c is winner",ch);
			status=1;
		}
		else if(gameboard[0][0]==ch && gameboard[0][1]==ch && gameboard[0][2]==ch)
			{
			printf("\n player %c is winner",ch);
			status=1;
		}
		else if(gameboard[0][1]==ch && gameboard[1][1]==ch && gameboard[2][1]==ch)
			{
			printf("\n player %c is winner",ch);
			status=1;
		}
		else if(gameboard[0][2]==ch && gameboard[1][2]==ch && gameboard[2][2]==ch)
			{
			printf("\n player %c is winner",ch);
			status=1;
		}	
		return status;		int validatainput(int cell);		
}



