#include<stdio.h>
#include<math.h>

#define ROWMAX 12
#define COLMAX 10

int main(){
    int row ,col=COLMAX;
    
    printf("\tMultiplication Table\n");
    printf("---------------------\n");

    for(row = 1;row<=ROWMAX;row++){
        while(col--){
            row*=col;
            printf("\t%d",row);
        }
        printf("\n");
    }
    printf("---------------------\n");

    return 0;
}