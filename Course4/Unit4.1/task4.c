#include <stdio.h>

void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

int max(int *arr, int size)
{
    int m = arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i] > m) 
        {
            m = arr[i];
        }
    }
    return m;
}

void behind(int *ptr, int size)
{
    int m = max(ptr, size);
    
    for (int i=0; i<size; i++) 
    {
        ptr[i] = m-ptr[i];
    }
}