#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double msal, hwsal, hw, h, cmwsal, sales, pwsal, np, mp;
    int wt = 0;
    while (wt != -1)
    {
        printf("Enter your employee type code (-1 to end):");
        scanf("%d",&wt);
        if (wt == -1)
        {
            break;
        }
        else
        {
            switch (wt)
            {
            case 1:
                printf("Enter your weekly salary:");
                scanf("%lf",&msal);
                printf("Salary is $%.2lf\n\n",msal);
                break;
            case 2:
                printf("Enter your hourly wage:");
                scanf("%lf",&hw);
                printf("Enter hours:");
                scanf("%lf",&h);
                if (h > 40)
                {
                    hwsal = 40*hw+(h-40)*hw*1.5;
                }
                else
                    hwsal = hw*h;
                printf("Salary is $%.2lf\n\n",hwsal);
                break;
            case 3:
                printf("Enter your sales:");
                scanf("%lf",&sales);
                cmwsal = 250 + sales/100*5.7;
                printf("Salary is $%.2lf\n\n",cmwsal);
                break;
            case 4:
                printf("Enter your number of work piece:");
                scanf("%lf",&np);
                printf("Enter how much each piece:");
                scanf("%lf",&mp);
                pwsal = np*mp;
                printf("Salary is $%.2lf\n\n",pwsal);
                break;
            }
        }
    }
    system("pause");
}