#include <stdio.h>
#include <stdlib.h>

int main()
{
    int doorCode;
    int typedCode;
    printf("Set a password:");
    scanf("%d",&doorCode);
    printf("Match with the door code:");
    scanf("%d",&typedCode);
    if (doorCode==typedCode){
        printf("The door is unlocked");
    }
    else{
        printf("The door is locked and you have typed wrong password");
    }
    return 0;
}
