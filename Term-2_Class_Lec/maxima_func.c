#include<stdio.h>
#include<math.h>


int max(int n,int arr[n]);
int min(int n,int arr[n]);
int main(){
    int n,max,min;
    printf("Enter the size of array: \n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter element of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mx = max(n,arr[n]);
    int mn = min(n,arr[n]);

    printf("Maximum :%d \n",mx);
    printf("Minimum :%d\t",mn);
    return 0;

}
int max(int n,int arr[n]){
    int max=arr[0];
    for(int i=0;i<n-1;i++){
            if(max<arr[i]){
               max = arr[i];
            }


    }
    return max;
}
int min(int n,int arr[]){
    int min=arr[0];
    for(int i=0;i<n-1;i++){
            if(min>arr[i]){
               min = arr[i];
            }
    }
    return min;

}

