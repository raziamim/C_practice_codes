#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum;
    printf("Enter a number:");
    scanf("%d",&myNum);
    if (myNum%2==0){
        printf("It is an even number");
    }
    else{
        printf("It's an odd number");
    }
    return 0;
}
