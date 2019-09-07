#include <stdio.h>

int main(void)
{
    char symbol;
    char plus = '+';
    int i;

    scanf("%c", &symbol);

    for(i=0; i<5; i++)
    {
        int j,k,l;

        for(j=4-i; j>0; j--)
        {
            printf("%c", plus);
        }
        
        for(l=0; l<(1+2*i); l++)
        {
            printf("%c", symbol);
        }
    
        for(k=4-i; k>0; k--)
        {
            printf("%c", plus);
        }

        printf("\n");
        
    }
    
}