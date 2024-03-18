#include<stdio.h>
int main(){
    printf("ID : 1902041\n");
    int row,col;
    //Enter the order of matrix
    printf("Enter row and column: ");
    scanf("%d%d",&row,&col);
    //create two 2D array of the same order
    int mat_A[row][col],mat_B[row][col],sum[row][col];
    //Take inputs into the first 2-D array
    printf("Enter %d elements of Matrix A: ",row*col);
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            scanf("%d",&mat_A[i][j]);
        }
    }
    //Take inputs into the second 2-D array
    printf("\nEnter %d elements of Matrix B: ",row*col);
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            scanf("%d",&mat_B[i][j]);
        }
    }
    /*Add both matrices A and B entry wise or element wise
    and stores result in matrix C*/
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            sum[i][j] = mat_A[i][j]+mat_B[i][j];
        }
    }
    /* Print the value of resultant matrix*/
    printf("A + B = \n");
    for(int i =0;i<row;i++){
        for(int j = 0;j<col;j++){
            printf("%d\t",sum[i][j]);
            if(i>0 && j==i){
            }
        }
        printf("\n");
    }
    return 0;
}