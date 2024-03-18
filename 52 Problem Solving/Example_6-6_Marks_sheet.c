#include<stdio.h>
#include<conio.h>
#include<math.h>

#define FIRST 360
#define SECOND 240

int main(){
    int n,m,roll,marks,sum;
    printf("Enter number of students and subjects\n");
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        sum=0;
        printf("Enter roll_number: ");
        scanf("%d",&roll);
        printf("\nEnter marks of %d subjects for Roll %d  ",m,roll);
        for(int j=0;j<m;j++){
            scanf("%d",&marks);
            sum+=marks;
        }
        printf("Total Marks = %d ",sum);
        if(sum>=FIRST){
            printf("(First Division)\n\n");
        }
        else if(sum>=SECOND){
            printf("(Second Division)\n\n");
        }
        else
            printf("(* FALL *)\n\n");
    }


    return 0;
}