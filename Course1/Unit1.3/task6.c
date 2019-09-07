#include <stdio.h>

int main(void)
{
    int numberOfGrades, totalScore = 0;
    double result, dnumberOfGrades;

    scanf("%d", &numberOfGrades);

    for(int i=0; i<numberOfGrades; i++)
    {
        int score;
        scanf("%d", &score);
        totalScore = totalScore + score;
    }

    dnumberOfGrades = (double) numberOfGrades;
    result = totalScore / dnumberOfGrades;
    printf("%.2lf", result);
    return 0;
}