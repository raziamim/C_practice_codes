#include <stdio.h>
#include <stdlib.h>

int main()
{
    float id,salary;
    int workhrs;
    printf("The Employees ID:");
    scanf("%f",&id);
    printf("The working hrs:");
    scanf("%d",&workhrs);
    printf("Salary Amount/hrs:");
    scanf("%f",&salary);
    printf("Salary:%fU$",workhrs*salary);
    return 0;
}
