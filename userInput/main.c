#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    //asking user to type age
    printf("Type your age: \n");
    //takes input from user
    scanf("%d", &age);
    //output the age that the user typed
    printf("The age you typed is: %d", age);
    return 0;
}
