#include <stdio.h>

int main() {
    double num1;
    double num2;
    char oper;

    printf("Enter a num: ");
    scanf("%lf" ,&num1);
    printf("Enter a operator: ");
    scanf("%s" ,&oper);
    printf("Enter a num: ");
    scanf("%lf" ,&num2);

    switch (oper){
    case '+':
        printf("%lf + %lf = %lf" , num1, num2, num1 + num2);
        break;
    case '-':
        printf("%lf - %lf = %lf" , num1, num2, num1 - num2);
        break;
    case '*':
        printf("%lf * %lf = %lf" , num1, num2, num1 * num2);
        break;
    case '/':
        printf("%lf / %lf = %lf" , num1, num2, num1 / num2);
        break;

    default:
        printf("Error!");
        break;

     }

    return 0;
}
