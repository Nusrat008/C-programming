#include<stdio.h>
int main(){
    int i;
    i = 8;
    float w[i],g[i];
    float cgpa=0,up=0,down=0;
    printf("Enter the credit hours and GPA for 8 semester:");
    for(int j =0;j<8;j++){
        scanf("%f",&w[j]);
        scanf("%f",&g[j]);
        up = up + (w[j]*g[j]);
        down = down + (w[j]);
    }
    cgpa = (up /down);
    printf("Total cgpa = %f\n",cgpa);
    return 0;
}










// #include<stdio.h>
// #include<math.h>
// int main(){
//     int num[6],temp,arr1[6];

//     printf("Enter the element of array: ");

//     for(int i=0;i<6;i++){
//     scanf("%d",&num[i]);
//     }
//     for(int i=0;i<6;i++){
//     scanf("%d",&arr1[i]);
//     }


//     printf("The first array is : \n");

//      for(int i =0;i<6;i++){
//         printf("%d\t",num[i]);
//      }
//      printf("The second array is : \n");
//      for(int i =0;i<6;i++){
//         printf("%d\t",arr1[i]);
//      }
//     return 0;
// }
