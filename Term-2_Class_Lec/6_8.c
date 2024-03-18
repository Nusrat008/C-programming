#include<stdio.h>
 #include<conio.h>
                        int main()
                            {
                                  //clrscr();
                                  int count,i,age;
                                 count=0;printf("Input age of 100 persons:");
                                 for(i=1;i<=100;i++)
                                             {
                                                  scanf("%d",&age);
                                                  if(age>=50&&age<=60)
                                                  count+=1;
                                                  continue;
                                            }
                                printf("the countable number is:%d",count);
                                return 0;
                                //getch();  
                         }


