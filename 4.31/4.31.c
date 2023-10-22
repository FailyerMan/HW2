#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int a = 0;a < 9;a++)
    {
        for (int b = 0;b < 9;b++)
        {
            if (a < (9-1)/2)
            {
                if (b < (9-(2*a+1))/2 || b > (9-(2*a+1))/2+(2*a))
                {
                    printf(" ");
                }
                else
                    printf("*");
            }
            else if (a > (9-1)/2)
            {
                if (b < (9-(9-a+(9-(a+1))))/2 || b > (9-(9-a+(9-(a+1))))/2+(9-a+(9-(a+1)))-1)
                {
                    printf(" "); 
                } 
                else
                    printf("*");
            }
            else
                printf("*");
        }
        printf("\n");
    }
    system("pause");
}