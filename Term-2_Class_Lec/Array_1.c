#include<stdio.h>

int main(){
    int arr[40];
    int sum=0;
    printf("Enter your array element:\n");
    for(int i=0;i<5;i++){

        printf("Enter a value of arr[%d] = ",i);
        scanf("%d",&arr[i]);
        sum +=arr[i];

    }
    printf("\nThe array elements are: ");
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }



    return 0;
}