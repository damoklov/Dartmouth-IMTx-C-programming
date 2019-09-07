#include <stdio.h>
#define SIZE 1024

int main(void)
{
    int num;
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        char name[SIZE], surname[SIZE];
        scanf("%s %s", name, surname);
        printf("%s %s\n", surname, name);
    }

    return 0;
}