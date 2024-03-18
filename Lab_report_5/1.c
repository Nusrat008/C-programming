#include<stdio.h>

int main()
{
    printf("ID : 1902041\n");
    int i, arr[5];
    /* Input elements in array */
    printf("Enter the elements into the array:");
    for(i=0;i<=4;i++){
    scanf("%d",&arr[i]);
    }
    /* Print the elements of array */
    printf("The elements of the array are: ");
    for(i=0; i<=4;i++){
    printf("%d \t",arr[i]);
    }
    return 0;
}
