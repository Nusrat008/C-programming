#include<stdio.h>
int main(){
    printf("ID : 1902041\n");
    int rows, columns, srchElement, count=0;
    //enter the order of matrix
    printf("Enter the number of Row and Column: ");
    scanf("%d %d", &rows, &columns);
    //create a 2D array of the same order
    int array[rows][columns];
    //Take inputs into the 2D array
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
        printf("Enter value for arr[%d][%d]: ",i,j);
        scanf("%d", &array[i][j]);
        }
  }
  //Enter the search element
  printf("\nEnter the element to get the position: ");
  scanf("%d", &srchElement);
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      if(array[i][j] == srchElement){
        /*If a match is found, then output the
        position and increment the count*/
        printf("[%d, %d] \n", i, j);
        count++;
      }
    }
  }
  /*If count remains 0, it means- 
    the array doesn't had the search element*/
  if(count==0)
    printf("Not found \n");
  return 0;
}