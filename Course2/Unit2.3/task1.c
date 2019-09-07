#include <stdio.h>


int main(void)
{
    int number;
    char word[101];
    scanf("%d %s", &number, word);
    for(int i=0; i<number; i++)
    {
        printf("%s\n", word);
    }

    return 0;
}