#include <stdio.h>
#include <stdlib.h>

int main()
{
    int apple, appleCost, tomatoes, tomatoesCost;
    printf("Enter the number of apples you bought:");
    scanf("%d",&apple);
    printf("Enter the cost per apple:");
    scanf("%d",&appleCost);
    printf("Enter the number of tomatoes you bought:");
    scanf("%d",&tomatoes);
    printf("Enter the cost per tomato:");
    scanf("%d",&tomatoesCost);
    printf("The total cost is: %d",apple*appleCost+tomatoes*tomatoesCost);

    return 0;
}
