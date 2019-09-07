#include <stdio.h>

int main(void)
{
    int digit = 8;
    int i = 0;
    for(i=0; i<11; i++)
    {
        printf("%dx%d = %d\n", i, digit, i*digit);
    }
    return 0;
}