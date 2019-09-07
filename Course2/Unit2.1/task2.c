#include <stdio.h>


int main(void)
{
    int time, result=10, cap=53;
    
    scanf("%d", &time);
    
    for(int i=0; i<time; i++)
    {
        result = result + 5;
    }
    if(result > cap)
    {
        result = cap;
    }
    printf("%d", result);
    return 0;
}