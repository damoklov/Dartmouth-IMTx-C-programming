#include <stdio.h>


int main(void)
{
    int num, sum=0;
    scanf("%d", &num);

    for(int i=0; i<num; i++)
    {
        int quantity;
        char type;

        scanf("%d %c", &quantity, &type);

        switch(type)
        {
            case 'c':
                sum += (sizeof(char) * quantity);
                break;
            case 'd':
                sum += (sizeof(double) * quantity);
                break;
            case 'i':
                sum += (sizeof(int) * quantity);
                break;
            default:
                printf("Invalid tracking code type\n");
                return 1;
        }
    }
    printf("%d bytes", sum);
    return 0;
}