#include <stdio.h>
int main()
{
    char name[10];
    printf("Enter name: \n");

    gets(name); 

    printf("Your name is %s\n", name);//Print a line of string
    char name1[20];
    printf("Enter name of book:\n");
    scanf("%s", &name1);
    printf("Your book name is: %s",name1);

 return 0;
}