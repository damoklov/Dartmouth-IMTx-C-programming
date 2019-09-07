#include <stdio.h>


int sumOfDigits(int);


int main(void)
{
    int num, result;
    scanf("%d", &num);
    result = sumOfDigits(num);
    printf("%d", result);
    return 0;
}


int sumOfDigits(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return ((n%10) + sumOfDigits(n/10));
    }
}
