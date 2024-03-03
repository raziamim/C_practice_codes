#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,y1,y2;
    printf("Input x1:");
    scanf("%d",&x1);
    printf("Input x2:");
    scanf("%d",&x2);
    printf("Input y1:");
    scanf("%d",&y1);
    printf("Input y2:");
    scanf("%d",&y2);
    printf("Distance between x points=%d\n",x1-x2);
    printf("Distance between y points=%d",y1-y2);
    return 0;
}
