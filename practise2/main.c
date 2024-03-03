#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum,hours,minutes,second;
    printf("Input an integer:");
    scanf("%d",&myNum);
    hours = myNum/3600;
    printf("Convert integer into hours:%d\n",hours);
    minutes = hours*60;
    printf("Convert hours into minutes:%d\n",minutes);
    second = minutes*60;
    printf("Convert minutes into second:%d",second);
    return 0;
}
