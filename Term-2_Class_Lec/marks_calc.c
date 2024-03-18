#include<stdio.h>
int main(){
    int num_student,num_sub;
    printf("Enter the number of students: ");
    scanf("%d",&num_student);
    printf("Enter the number of subject: ");
    scanf("%d",&num_sub);
    int sub_marks[num_sub];
    int total_stud_marks[num_student];
    printf("Enter the marks \n");
    for(int i = 0;i<=num_student;i++){
        total_stud_marks[i] = 0;
        printf("student %d = ",i);
        for(int j = 1;j<=num_sub;j++){
            scanf("%d",&sub_marks[j]);
            total_stud_marks[i] +=sub_marks[j];
        }
    }
    for(int i = 1;i<=num_student;i++){
        printf("Tatal marks students %d = %d \n",i,total_stud_marks[i]);
    }
    return 0;
}

