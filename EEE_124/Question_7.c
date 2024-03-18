//Write a program to take input of name, roll no and marks obtained by a student in 5 subjects each 
//have its 100 full marks and display the name, roll no with percentage score secured. 
#include<stdio.h> 
#include<conio.h> 
int 
main(void) 
{ char name[20]; 
int rollno; float msub1, msub2, 
msub3, msub4, msub5, msum, score; 
printf("Enter Name of Student: "); 
scanf("%[^\n]", name);
 /*can use scanf(“%s”,name) but it reads single 
word only.*/
printf ("\nRoll Number: "); scanf("%d", &rollno); 
printf ("\nEnter Marks in 5 Subjects:\n"); 
scanf("%f%f%f%f%f", &msub1, &msub2, &msub3, &msub4, &msub5); 
msum=msub1+msub2+msub3+msub4+msub5; 
score = msum/500*100; 
printf("\nName of Student: %s", name); 
printf("\nRoll Number: %d", rollno); 
printf ("\nPercentage Score Secured: %2.2f%c", score,'%'); 
return 
0; 
} 