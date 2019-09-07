#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
void copyName(char *, char *);
// Write other function prototypes here (if any)

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

struct student * createStudent(char studentName[], int studentAge)
{
    struct student * profile;
    profile = (struct student *) malloc(sizeof(struct student));
    copyName(studentName, profile->name);
    profile->age = studentAge;
    profile->next = NULL;
    return profile;
}
// Write your createStudent function here (and any other functions you see fit)

void copyName(char *oldName, char *newName)
{
    int i=0;
    while (oldName[i] != '\0')
    {
        newName[i] = oldName[i];
        i++;
    }
    newName[i] = '\0';
}