#include<stdio.h>
#include<math.h>

#define ROWMAX 12
#define COLMAX 10

int main(){
    int row ,col=1,y=1;
    
    printf("\t\tMULTIPLICATON TABLE\n");
    printf("---------------------------------------------------------------------------\n");

    for(row = 1;row<=ROWMAX;row++){
        for(col=1;col<=COLMAX;col++){
            y=row*col;
            printf("%d\t",y);
        }
        printf("\n");
    }
    printf("---------------------------------------------------------------------------\n");

    return 0;
}