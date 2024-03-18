#include<stdio.h>
#include<math.h>
int main(){
    printf("ID : 1902041\n");
    int n,negative;
    /* Input size of array */
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    /* Input elements of array */
    printf("\nEnter element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Print the reverse array elements
    printf("The reverse array elements are: ");
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}

