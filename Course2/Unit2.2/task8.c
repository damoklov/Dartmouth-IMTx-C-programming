#include <stdio.h>


int main(void)
{
    int bot, top, temperature, flag=1;
    scanf("%d %d", &bot, &top);
    do
    {
        scanf("%d", &temperature);
        if(temperature >= bot && temperature <= top)
        {
            printf("Nothing to report\n");
        }
        else if(temperature == -999)
        {
            flag = 0;
        }
        else
        {
            printf("Alert!\n");
            flag = 0;
        }
    }
    while(flag);

    return 0;
}