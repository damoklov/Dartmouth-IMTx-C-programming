#include <stdio.h>
#define SIZE 51


int main(void)
{
    char name[SIZE];
    scanf("%s", name);
    int i = 0;
    while(name[i]!='\0')
    {
        i++;
    }
    if(i%2==0)
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 2);
    }
    return 0;
}