#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weight,Weight,noItem,item;
    int totalItem = noItem+item;
    printf("Weight of Item-1:");
    scanf("%d",&weight);
    printf("Number of Item-1:");
    scanf("%d",&noItem);
    printf("Weight of Item-2:");
    scanf("%d",&Weight);
    printf("Number of Item-2:");
    scanf("%d",&item);
    printf("Average value:%d",weight*noItem+Weight*item/totalItem);
    return 0;
}
