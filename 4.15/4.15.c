#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float tm[5] = {5000,5000,5000,5000,5000};
    int a = 0;
    printf("Investmant of Money:5000\nYears:15\n");
    for (float b = 0.1;b < 0.125;b+=0.005)
    {
        for (int c = 0;c < 15;c++)
        {
            tm[a] = tm[a]+tm[a]*b;
        }
        printf("Money with rate of %.1f%% is $%.2f\n",b*100,tm[a]);
        a++;
    }
    system("pause");
}