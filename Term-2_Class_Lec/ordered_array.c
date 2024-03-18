
#include<stdio.h>
#include<math.h>
int main(){
    int num[6],temp;

    printf("Enter the element of array: ");

    for(int i=0;i<6;i++){
    scanf("%d",&num[i]);
    }

    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            if(num[j]>num[j+1]){
               temp = num[j];
               num[j]= num[j+1];
               num[j+1] = temp;
            }

        }
    }
    printf("The ordered array is : \n");

     for(int i =0;i<6;i++){
        printf("%d\t",num[i]);
     }
    return 0;
}
