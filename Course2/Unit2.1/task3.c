#include <stdio.h>


int main(void)
{
    int val1, val2;
    scanf("%d\n%d", &val1, &val2);
    
    if((val1 + val2) >= 10)
    {
        printf("Special tax\n%d", 36);
    }
    else
    {
        printf("Regular tax\n%d", (val1 + val2)*2);
    }
    return 0;
}