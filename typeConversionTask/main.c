#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fullMarks = 100, maryScore = 48;
    float perc = (float) maryScore/fullMarks*100;
    printf("Total Marks: %d\n",fullMarks);
    printf("Mary's Marks: %d\n",maryScore);
    printf("Percentage: %f\n",perc);

    return 0;
}
