#include <stdio.h>

void defineAge(int*);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	defineAge(&age);

	printf("Your new age will be %d!\n", age);
	return 0;
}


void defineAge(int* ageAddr)
{
    if(*ageAddr > 21)
    {
        * ageAddr -= 10;
    }
    else
    {
        * ageAddr *= 2;
    }
}