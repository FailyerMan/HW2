#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    for (int a = 0;a < 10;a++)
    {
        for (int b = 0;b < 10;b++)
        {
            if (b <= a)
            {
                printf("%s","*");
            }
            else
                printf("%s"," ");
        }
        printf("\n");
    }
    printf("\n");
    for (int c = 0;c < 10;c++)
    {
        for (int d = 0;d < 10;d++)
        {
            if (d < 10-c)
            {
                printf("%s","*");
            }
            else
                printf("%s"," ");
        }
        printf("\n");
    }
    printf("\n");
    for (int e = 0;e < 10;e++)
    {
        for (int f = 0;f < 10;f++)
        {
            if (f < e)
            {
                printf("%s"," ");
            }
            else
                printf("%s","*");
        }
        printf("\n");
    }
    printf("\n");
    for (int g = 1;g < 11;g++)
    {
        for (int h = 1;h < 11;h++)
        {
            if (h <= 10-g)
            {
                printf("%s"," ");
            }
            else
                printf("%s","*");
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
}