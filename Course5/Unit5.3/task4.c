#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student *start);
void copyName(char *, char *);
/* add any other prototypes as needed */

int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

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

struct student *append(struct student * end, struct student * newStudptr)
{
    end->next = newStudptr;
    end = newStudptr;
    return end;
}

void printStudents(struct student *start)
{
    struct student *ptr = start;

    while(ptr != NULL)
    {
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
}

void freeStudents(struct student *start)
{
    struct student *ptr = start;
    struct student *tmp;
    while (ptr!=NULL)
    {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}
/* Place your function definitions here. Be sure to include the definitions for 
   createStudent(), append(), printStudents() as well as any other functions you 
   created for the previous tasks. */