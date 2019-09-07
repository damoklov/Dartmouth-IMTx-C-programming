#include <stdio.h>


int main(void)
{
    int n = 1;
    double myClassGrade, otherClassGrade;
    FILE * file = fopen("gradeComparison.txt", "r");
    fscanf(file, "%lf", &myClassGrade);
    while (fscanf(file, "%lf", &otherClassGrade) != EOF)
    {
        n++;
        
        if (myClassGrade < otherClassGrade)
        {
            printf("No %d\n", n);
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
