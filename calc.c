#include <stdio.h>

int main() 
{
    int x, y, sum = 0, sub = 0, mult = 0;
    char operator;
    printf("Enter first digit: ");
    scanf("%d", &x);

    printf("Enter operator: ");
    scanf(" %c", &operator);

    printf("Enter second digit: ");
    scanf("%d", &y);

    switch (operator) 
    {
    case '+':
        sum = x + y;
        printf("sum: %d", sum);
        break;
    case '-':
        sub = x - y;
        printf("sub: %d", sub);
        break;
    case '*':
        mult = x * y;
        printf("mult: %d", mult);
        break;
    default:
        printf("Error: Invalid operator");
        break;
    }

    return 0;
}
