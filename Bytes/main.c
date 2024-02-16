#include <stdio.h>
#include <stdlib.h>

int main()
{
    int noodles = 5, costNoodles = 7, butter= 2, potato = 1;
    float costButter = 29.91;

    printf("Number of noodles: %d\n",noodles);
    printf("Cost of each noodles: %d$\n",costNoodles);
    printf("Number of butter: %d\n",butter);
    printf("Cost of each butter: %.2f$\n",costButter);
    printf("Quantity of potato: %d kg\n",potato);
    printf("Total cost= %.2f$",noodles*costNoodles+butter*costButter+potato);








    return 0;
}
