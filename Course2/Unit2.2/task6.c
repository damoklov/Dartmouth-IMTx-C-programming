#include <stdio.h>


int main(void)
{
    int ui=0, summ=0;
    while(ui != -1)
    {
        scanf("%d\n", &ui);
        summ = summ + ui;
    }
    printf("%d", summ + 1);
    return 0;
}