#include <stdio.h>

int main(void)
{
    int i;
    int userInput;
    scanf("%d", &userInput);
    
    for(i=0; i<11; i++)
    {
        printf("%dx%d = %d\n", i, userInput, i*userInput);
    }
    return 0;
}