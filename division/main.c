#include <stdio.h>
#include <stdlib.h>

int main()
{
    float firstNumber,secondNumber;
    printf("First number,X:");
    scanf("%f",&firstNumber);
    printf("Second number,Y:");
    scanf("%f",&secondNumber);
    printf("Expected output:%.1f",firstNumber/secondNumber);
    return 0;
}
