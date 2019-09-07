#include <stdio.h>
#define SIZE 51


int main(void)
{
    char word[SIZE];
    int i=0, position=-1;

    scanf("%s", word);
    
    while(word[i] != '\0')
    {
        if(word[i] == 't' || word[i] == 'T')
        {
            position = i;
        }
        i++;
    }
    if(position != -1 && i/2 >= position)
    {
        printf("%d", 1);
    }
    else if(position != -1 && i/2 < position)
    {
        printf("%d", 2);
    }
    else
    {
        printf("%d", -1);
    }
    return 0;
}