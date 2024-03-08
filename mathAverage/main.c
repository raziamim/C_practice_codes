#include <stdio.h>
#include <stdlib.h>

int main()
{
    int std1,std2,std3;
    float Average;
    printf("Mathematics marks of student1:");
    scanf("%d",&std1);
    printf("Mathematics marks of student2:");
    scanf("%d",&std2);
    printf("Mathematics marks of student3:");
    scanf("%d",&std3);
    Average = std1+std2+std3/3;
    printf("Average marks in mathematics:%.2f",Average);
    return 0;
}
