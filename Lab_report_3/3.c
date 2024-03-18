#include<stdio.h>
int main()
{
   int score;
   char grade;
   printf("Enter score(0-100): ");
   scanf("%d",&score);
   if(score<0 || score>100) {
     printf("Invalid Score");
     return 0;
   }
   if(score>=90 && score<=100)
    printf("Grade A+\n");
   else if(score>=80)
    printf("Grade A\n");
   else if(score>=70)
     printf("Grade B+\n");
   else if(score>=60)
     printf("Grade B\n");
   else if(score>=50)
     printf("Grade C\n");
   else
     printf("Grade F\n");
   return 0;
}
