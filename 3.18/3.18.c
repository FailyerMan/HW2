#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    const float bsal = 200.00;
    float sd = 0, sal;
    while (sd != -1)
    {
        printf("Enter sales in dollars (-1 to end):");
        scanf("%f",&sd);

        if (sd == -1)
        {
            break;
        }
        else
        {
            sal=bsal+(sd/100*9);
            printf("Salary is: $%.2f\n\n",sal);
        }
    }
    system("pause");
}