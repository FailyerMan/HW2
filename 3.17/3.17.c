#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int act = 0;
    float bgb,tg,tc,cl,tb;
    while (act!=-1)
    {
        printf("Enter account number (-1 to end):");
        scanf("%d",&act);
        if (act == -1)
        {
            break;
        }
        else 
        {
            printf("Enter beginning balance:");
            scanf("%f",&bgb);
            printf("Enter total charges:");
            scanf("%f",&tg);
            printf("Enter total credits:");
            scanf("%f",&tc);
            printf("Enter credit limit:");
            scanf("%f",&cl);
        
            tb=bgb+tg-tc;

            if (tb > cl)
            {
                printf("Account:\t%d\n",act);
                printf("Credit limit:\t%.2f\n",cl);
                printf("Balance:\t%.2f\n",tb);
                printf("Credit Limit Exceeded\n\n");
            }
            else
                printf("\n");
        }
    }
    system("pause");
}