#include <stdio.h>
int main() {
  int num;
  printf("Enter an integer: \n");
  scanf("%d", &num);
  for(int i=num;i>=0;i=i-2){
    printf("%d ", i);
  }
  return 0;
}
