#include <stdio.h>

int main(void)
{
    char words[69][41];
    for(int i=0; i<68; i++)
    {
        scanf("%s", words[i]);
    }
    for(int j=67; j>=0; j--)
    {
        printf("%s ", words[j]);
    }
    return 0;
}