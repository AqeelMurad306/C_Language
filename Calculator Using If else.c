#include <stdio.h>

int main() {
  int num1,num2;
  char op;

  printf("Enter a num: ");
  scanf("%d" ,&num1);
  printf("Enter a operator: ");
  scanf("%s" ,&op);
  printf("Enter a num: ");
  scanf("%d" ,&num2);

  if(op == '+'){
    printf("%d" , num1+num2);
  }
  else if(op == '-'){
    printf("%d" , num1-num2);
  }
  else if(op == '*'){
    printf("%d" , num1*num2);
  }
  else if (op == '/'){
    printf("%d" , num1/num2);
  }
  else {
    printf("Error!");
  }

  return 0;
}