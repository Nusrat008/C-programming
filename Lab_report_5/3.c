#include<stdio.h>
#include<math.h>
int main(){
    printf("ID : 1902041\n");
    int n,large,small;
    /* Input size of array */
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    /* Input elements of array */
    printf("\nEnter element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Loop for finding the largest element of the array
    large=arr[0];
    for(int i=0;i<n;i++){
            if(large<arr[i]){
               large = arr[i];
            }
    }
    //Loop for finding the smallest element of the array
    small=arr[0];
    for(int i=0;i<n;i++){
            if(small>arr[i]){
               small = arr[i];
            }
    }
    printf("Largest :%d \n",large);
    printf("Smallest :%d\t",small);
    return 0;
}

