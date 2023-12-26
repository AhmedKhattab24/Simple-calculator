#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int result;
    char operation ;
    printf("enter the num1:\n",num1);
    scanf("%i",&num1);
     printf("enter the num2:\n",num2);
    scanf("%i",&num2);
    printf("enter operation (+ or - or / or *):\n");
    scanf(" %c ",&operation);
    switch (operation){
    case '+':
        result = num1 + num2;
        printf("result= %i",result);
        break;
     case '-':
        result = num1 - num2;
        printf(" result= %i",result);
        break;
     case '/':
        result = num1 % num2;
        printf("result= %i",result);
        break;
     case '*':
        result = num1 * num2;
        printf(" result= %i",result);
        break;
    default:
        printf("invalid operation\n");
    }

    return 0;
}
