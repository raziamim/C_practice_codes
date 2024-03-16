#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if (age<0){
        printf("The person is not eligible for voting");
    }
    else{
        printf("The person can vote");
    }
    return 0;
}
