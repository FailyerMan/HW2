#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int w, l;
    printf("Enter width:");
    scanf("%d",&w);
    printf("Enter length:");
    scanf("%d",&l);
    for (int a = 0;a < l;a++)
    {
        for (int b = 0;b < w;b++)
        {
            if (a == 0 || a == l-1 || b==0 || b == w-1)
            {
                printf("+");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    system("pause");
}