#include <stdio.h>

int main(void) {
	FILE  * file = fopen("myGrades.txt", "r");;
	int gradeOld, gradeNew;
	
	scanf("%d", &gradeNew);
	
	while (fscanf(file, "%d", &gradeOld) != EOF);
	fclose(file);
	
	if (gradeOld!=gradeNew)
	{
		file = fopen("myGrades.txt", "a");
		fprintf(file, " %d", gradeNew);
		fclose(file);
	}
	file = fopen("myGrades.txt", "r");
    while (fscanf(file, "%d", &gradeOld) != EOF)
    {
        printf("%d ", gradeOld);
    }
    printf("\n");
    fclose(file);

	return 0;
}
