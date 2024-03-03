#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalDistance;
    float totalFuel;
    printf("Total distance in km:");
    scanf("%d",&totalDistance);
    printf("Total fuel spent in liters:");
    scanf("%f",&totalFuel);
    printf("Average Consumption:%fkm/lt",totalDistance/totalFuel);
    return 0;
}
