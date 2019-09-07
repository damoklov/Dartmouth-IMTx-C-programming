#include <stdio.h>

int main(void)
{
    int people, result;
    double percentageGrowth;
    scanf("%d\n%lf", &people, &percentageGrowth);
    result = people + (people * percentageGrowth/100);
    printf("%d", result);
}