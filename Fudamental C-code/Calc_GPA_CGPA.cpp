#include<iostream>

using namespace std;

int main()
{
int grades[30];
float gpa;
int i = 0;
int i2 = 0;
int check = 0;
while(i < 30){
scanf("%d", &grades[i]);
printf("do you want to see your gpa? hit 1 to calculate it now: \n");
scanf("%d", &check);
if(check == 1){
i2 = 0;
while(i2 < i){
gpa = gpa + grades[i2];
i2++;
}
gpa = gpa / i2;
printf("%d", gpa);
}
i++;
}
return 0;
}