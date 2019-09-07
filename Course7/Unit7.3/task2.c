#include <stdio.h>


int main(void)
{
    int numGrades, sum = 0, currentGrade;
    double average;
    FILE * file;
    file = fopen("studentGrades.txt", "r");
    fscanf(file, "%d", &numGrades);
    for (int i=0; i<numGrades; i++)
    {
        fscanf(file, "%d", &currentGrade);
        sum += currentGrade;
    }
    average = sum / numGrades;
    printf("%.2lf", average);
    return 0;
}