#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter an integer:");
    scanf("%d",&number);
    if (number<0){
        printf("It is a negative number");

    }
    else{
        printf("It is a positive number");
    }


    return 0;
}
