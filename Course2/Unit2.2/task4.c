#include <stdio.h>


int main(void)
{
    int num, population, result=0;
    scanf("%d\n", &num);
    for(int i=0; i<num; i++)
    {
        scanf("%d\n", &population);
        if(population > 10000)
        {
            result++;
        }
    }
    printf("%d", result);
    return 0;
}