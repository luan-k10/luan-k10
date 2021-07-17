#include <stdio.h>

int main(void) {
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  if (num1%num2 == 0){
    printf("São multiplos.\n");
  }
  else{
    printf("Não são multiplos.\n");
  }
  return 0;
}