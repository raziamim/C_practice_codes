#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distance;
    float inch;
    printf("Input the distance in cm:");
    scanf("%d",&distance);
    inch = distance*0.3937;
    printf("Convert distance in cm to inches:%.2finches",inch);
    return 0;
}
