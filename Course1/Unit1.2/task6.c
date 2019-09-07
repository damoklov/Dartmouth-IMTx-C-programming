#include <stdio.h>

int main(void)
{
    int times;
    int enginePower;
    int resistance;
    int weight;
    int height;
    int result = 0;
    scanf("%d", &times);
    for(int i=0; i<times; i++)
    {
        scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
        result = result + (enginePower + resistance) * (weight - height);
    }
    printf("%d", result);
    return 0;
}