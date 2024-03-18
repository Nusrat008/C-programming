#include<stdio.h>
#include<math.h>
int main(){
    int n,max,min;
    printf("Enter the size of array: \n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=0;i<n-1;i++){
            if(max<arr[i]){
               max = arr[i];
            }

    }
    min=arr[0];
    for(int i=0;i<n-1;i++){
            if(min>arr[i]){
               min = arr[i];
            }
    }
    printf("Maximum :%d \n",max);
    printf("Minimum :%d\t",min);
    return 0;

}

