#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    int temp;
    printf("First number:");
    scanf("%d",&x);
    printf("Second number:");
    scanf("%d",&y);
    temp = y;
    printf("After swapping first number is:%d\n",temp);
    temp=x;
    printf("After swapping second number is:%d\n",temp);



    return 0;
}
