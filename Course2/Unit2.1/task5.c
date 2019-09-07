#include <stdio.h>

int main(void)
{
    int age, weight, price;
    scanf("%d\n%d", &age, &weight);
    if(age == 60)
    {
        price = 0;
    }
    else if(age <= 10)
    {
        price = 5;
    }
    else
    {
        if(weight >= 20)
        {
            price = 30 + 10;
        }
        else
        {
            price = 30;
        }
    }
    printf("%d", price);
    return 0;
}