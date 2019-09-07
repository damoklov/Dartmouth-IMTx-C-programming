#include <stdio.h>

int main(void)
{
    int passengers;
    double result, gas;

    scanf("%d %lf", &passengers, &gas);
    
    if(passengers > 0)
    {
        result = (1.0 + gas) / (passengers + 1);
    }
    else
    {
        result = gas;
    }
    printf("%.2lf", result);
    return 0;
}