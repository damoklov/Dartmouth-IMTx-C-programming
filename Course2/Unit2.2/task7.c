#include <stdio.h>


int main(void)
{
    int population, infected=1, days=1;
    scanf("%d", &population);
    while(population > infected)
    {
        infected = infected + infected*2;
        days++;
    }
    printf("%d", days);
    return 0;
}