#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float inst,pcp=0,rate,days;

    while (pcp != -1)
    {
        printf("Enter loan principal (-1 to end):");
        scanf("%f",&pcp);

        if (pcp == -1)
        {
            break;
        }
        else
        {
            printf("Enter interest rate:");
            scanf("%f",&rate);
            printf("Enter term of the loan in days:");
            scanf("%f",&days);
            inst = pcp*rate*(days/365);
            printf("The interest charge is $%.2f\n\n",inst);    
        }
    }
    system("pause");
}