#include <stdio.h>


int main(void)
{
    int quantity, sum;
    char type;

    scanf("%c %d", &type, &quantity);

    switch(type)
    {
        case 'c':
            sum = (sizeof(char) * quantity);
            break;
        case 'd':
            sum = (sizeof(double) * quantity);
            break;
        case 'i':
            sum = (sizeof(int) * quantity);
            break;
        case 's':
            sum = (sizeof(short) * quantity);
        default:
            return 1;
    }
    
    int mb = sum/1024**2;
    int kb = (sum - mb*1024**2)/1024;
    int b = sum - mb*1024**2 - kb*1024;
    
    if (mb>0)
    {
        printf("%d MB and %d KB and %d B", mb, kb, b);
    } 
    else if (kb>0)
    {
        printf("%d KB and %d B", kb, b);
    } 
    else
    {
        printf("%d B", b);
    }

    return 0;
}