#include <stdio.h>


int main(void)
{
    int arr[10], value, num;
    for(int i=0; i<10; i++)
    {
        scanf("%d", &value);
        arr[i] = value;
    }
    scanf("\n%d", &num);
    printf("%d", arr[num]);
    return 0;
}