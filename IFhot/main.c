#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp;
    printf("Give your current temperature in centigrade:");
    scanf("%d",&temp);
    if (temp<0){
        printf("Freezing weather");
    }

    else if (temp<10){
        printf("Very cold weather");
    }

    else if (temp<20){
        printf("Cold weather");
    }

    else if (temp<30){
        printf("Normal in temp");
    }

    else if (temp<40){
        printf("Its hot");
    }

    else{
        printf("Its very hot");
    }



    return 0;
}
