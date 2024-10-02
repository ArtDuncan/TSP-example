#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int errorCheck;
    printf("Please give 2 integers to be added\n");
    errorCheck = scanf("%d", &num1);
    if(errorCheck != 1)
    {
        printf("Invalid input, terminating program\n");
        return 0;
    }
    errorCheck = scanf("%d", &num2);
    if(errorCheck != 1)
    {
        printf("Invalid input, terminating program\n");
        return 0;
    }
    printf("%d + %d = %d\n", num1, num2, (num1 + num2));
    return 0;
}