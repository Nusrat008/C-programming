#include<stdio.h>
#include<conio.h>
#include<math.h>
 #include<windows.h>
// void gotoxy(int x,int y)
// {
// printf("%c[%d;%df",0x1B,y,x);
// }
void gotoxy(int a, int b)    
    {
        COORD c;

        c.X=a;        
        c.Y=b;

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);    
    }
int main(){
    int i,num,j,x=40,y;
    // clrscr();
    printf("Enter number of generating Pyramid: \n");
    scanf("%d",&num);

    for(y=0;y<=num;y++){
        gotoxy(x,y+1);
        for(j=0-y;j<=y;j++){
            printf("%3d",abs(j));
        }
        //printf("\n");
        x = x-3;
    }

    return 0;
}