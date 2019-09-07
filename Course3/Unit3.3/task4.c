#include <stdio.h>


void reverseArray(int *);


int main(void)
{
    int arr[7];

    for(int i=0; i<6; i++)
    {
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }

    reverseArray(arr);

    for(int j=0; j<6; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}


void reverseArray(int *ptr)
{
    int n=6, d, c;
 
    int s[7];

    for (c = n - 1,d = 0; c >= 0 ; c--, d++ )
        *(s+d) = *(ptr+c);
   
    for (c = 0 ; c < n ; c++ )
        *(ptr+c) = *(s+c);
}