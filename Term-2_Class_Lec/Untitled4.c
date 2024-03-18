#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the size of array: \n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Positive numbers : \n");
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
           printf("%d\t",arr[i]);
        }
    }
    printf("\nOdd numbers: \n");
    for(int j=0;j<n;j++){
        if(arr[j]%2!=0){
            printf("%d\t",arr[j]);
        }
    }


}
