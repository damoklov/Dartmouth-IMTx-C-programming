#include <stdio.h>

int main(void)
{
    int weight = 120;
    int bagPrice = 45;
    int bags = 0;
    double request;
    scanf("%lf", &request);
    while(request >= 0)
    {
        request = request - weight;
        bags++;
    }
    printf("%d", bags*bagPrice);
    return 0;
}