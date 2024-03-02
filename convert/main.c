#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum;
    float year;
    float month;
    float days;
    printf("Give an integer:\n");
    scanf("%d",&myNum);
    year = myNum/365;
    printf("Year = %f\n",year);
    month = year*12;
    printf("Month = %f\n",month);
    days = month*30;
    printf("Days = %f",days);

    return 0;
}
