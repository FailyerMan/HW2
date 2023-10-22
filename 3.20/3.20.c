#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float wh = 0, whr, sal;
    while (wh != -1)
    {
        printf("Enter # of hours worked (-1 to end):");
        scanf("%f",&wh);
        if (wh == -1)
        {
            break;
        }
        else
        {
            printf("Enter hourly rate of the worker ($00.00):");
            scanf("%f",&whr);
            if (wh <= 40)
            {
                sal = wh*whr;
            }
            else
            {
                sal = 40*whr+(wh-40)*whr*1.5;
            }
            printf("Salary is $%.2f\n\n",sal);
        }
    }
    system("pause");
}