#include <stdio.h>
#include <math.h>


int main(void)
{
    int userInput;
    scanf("%d", &userInput);
    double sqRoot = sqrt(userInput);
    double e = exp(1);
    printf("%.8lf\n%.10lf\n", sqRoot, e);
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra -lm program.c -o program");
    return 0;
}