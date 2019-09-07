#include <stdio.h>
#define SIZE 101


int main(void)
{
    int num, longest = 0;
    char word[SIZE];
    scanf("%d", &num);
    
    for(int i=0; i<num; i++)
    {
        scanf("%s", word);
        int j = 0;
        while(word[j]!='\0')
        {
            j++;
        }
        if(j > longest)
        {
            longest = j;
        }
    }
    printf("%d", longest);
    return 0;
}