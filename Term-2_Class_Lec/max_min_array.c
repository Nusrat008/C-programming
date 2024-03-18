#include<stdio.h>
#include<math.h>

int main(){
    int n,temp;
    printf("Enter the size of array: \n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[j+1]){
               temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Maximum :%d \n",arr[0]);

    printf("Minimum :%d\t",arr[n-1]);
    return 0;

}
