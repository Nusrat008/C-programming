#include <stdio.h>
#include <Conio.h>

int main()
{
    char name[300];
    float sub1,sub2,sub3,sub4,sub5,total,percentage;
    int roll;
    printf("Enter the name of student ");
    scanf("%[^n]",&name);

    printf("Enter the roll no: \n");
    scanf("d\n",&roll);
    printf("Enter subject number: \n");
    scanf("%f%f%f%f%f",&sub1, &sub2, &sub3, &sub4, &sub5);


    total = sub1+sub2+sub3+sub4+sub5;
    percentage = (total/500)*100;


    printf("The percentage of the marks is : %f %\n",percentage);


    return 0;

}
