#include <stdio.h>


int min(int, int);


int main(void)
{
    int num, minValue;
    scanf("%d", &num);
    scanf("%d", &minValue);

    for(int i=1; i<num; i++)
    {
        int newValue;
        scanf("%d", &newValue);
        minValue = min(minValue, newValue);
    }
    
    printf("%d", minValue);
    return 0;
}

int min(int x, int y)
{
    if(x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
