#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    int width;
    int area;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle:");
    scanf("%d", &width);
    printf("The area of the rectangle is: %d", length*width);
    return 0;
}
