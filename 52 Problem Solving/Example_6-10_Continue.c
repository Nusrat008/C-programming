#include<stdio.h>
#include<math.h>

int main(){
    int negative=0,count=1;
    float num,root;

    printf("Enter 9999 to Stop\n");
    while(count<=100){

        printf("Enter a number: ");
        scanf("%f",&num);

        if(num==9999)
            break;

        if(num<0){
            printf("Number is negative\n");
            negative++;
            continue;
        }

        root = sqrt(num);
        printf("Number = %f ; Square root = %f\n",num,root);
        count++;
     }

    printf("Number of positive item = %d\n",count);
    printf("Number of negative item = %d\n",negative);

    return 0;
}