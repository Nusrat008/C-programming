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


    printf("Reverse array: \n");
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;

}
