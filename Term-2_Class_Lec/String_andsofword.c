#include <stdio.h>
 int main()
 {
 char answer;
 printf("Would you like to know my name?\n");
 printf("Type Y for YES and N for NO: ");
 answer = getchar(); /* .... Reading a character...*/
 scanf("%c", &answer);
 if(answer == 'Y' || answer == 'y')
 printf("\n\nMy name is BUSY BEE\n");
 else
 printf("\n\nYou are good for nothing\n");
 }