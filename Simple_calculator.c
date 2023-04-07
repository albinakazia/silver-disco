#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /,sqrt,^): ");
    scanf("%c", &operator);

    if(operator!=sqrt){

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '^':
            result =(int)num1^(int)num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 == 0) {
                printf("Error: Division by zero.\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;

    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    }
        printf("Enter one number: ");
        scanf("%f", &num1);
        result = sqrt(num1);
    printf("%.2f\n",result);

    }



    return 0;
}
