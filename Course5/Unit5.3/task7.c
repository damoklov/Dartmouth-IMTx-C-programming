#include <stdio.h>
#include <stdlib.h>

struct digit {
    int num;
    struct digit *next;
};


// Add a prototype for countRedun() here
struct digit * createDigit(int);
struct digit * append(struct digit * end, struct digit * newDigptr);
void printNumber(struct digit *);
void freeNumber(struct digit *);
struct digit *readNumber(void); 
struct digit * insertAtFront(struct digit *, struct digit *);
struct digit * insertIntoSorted(struct digit *, struct digit *);
struct digit * sortedCopy(struct digit *);
int divisibleByThree(struct digit * start);
int changeThrees(struct digit * start);
short countRedun(struct digit *);


// Do not modify this main() function
int main(void) {
    struct digit *start;
    start = readNumber();

    printf("The number ");
    printNumber(start);
    printf("contains %d redundancies.\n", countRedun(start));

    freeNumber(start);

    return 0;
}

struct digit *createDigit(int dig) {
    struct digit *ptr;
    ptr = (struct digit *) malloc(sizeof(struct digit));
    ptr->num = dig;
    ptr->next = NULL;
    return ptr;
}

struct digit * append(struct digit * end, struct digit * newDigptr) {
    end->next = newDigptr;
    return(end->next);
}

void printNumber(struct digit *start) {
    struct digit * ptr = start;
    while (ptr!=NULL) {
        printf("%d", ptr->num);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeNumber(struct digit *start) {
    struct digit * ptr = start;
    struct digit * tmp;
    while (ptr!=NULL) {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}

struct digit *readNumber(void) {
    char c;
    int d;
    struct digit *start, *end, *newptr;
    start = NULL;
    scanf("%c", &c);
    while (c != '\n') {
        d = c-48;
        newptr = createDigit(d);
        if (start == NULL) {
            start = newptr;
            end = start;
        } else {
            end = append(end, newptr);
        }
        scanf("%c", &c);
    }
    return(start);
}

int divisibleByThree(struct digit * start) {
    struct digit * ptr = start;
    int qsum = 0;
    while (ptr!=NULL) {
        qsum += ptr->num;
        ptr = ptr->next;
    }
    if (qsum%3==0) return 1;
    else return 0;
}

int changeThrees(struct digit * start) {
    struct digit * ptr = start;
    int sum = 0;
    while (ptr!=NULL) {
        if (ptr->num == 3) {
            ptr->num = 9;
            sum++;
        }
        ptr = ptr->next;
    }
    return(sum);
}

struct digit * insertAtFront(struct digit * start, struct digit * newptr)
{
    newptr->next = start;
    return(newptr);
}

struct digit * insertIntoSorted(struct digit *start, struct digit *newDig){
    struct digit * ptr = start;
    struct digit * prev = NULL;

    while ((ptr!=NULL) && (ptr->num < newDig->num))
    {
        prev = ptr;
        ptr = ptr->next;
    }
    if (prev==NULL)
    {
        start = insertAtFront(start, newDig);
    }
    else 
    {
        prev->next = newDig;
        newDig->next = ptr;
    }
    return(start);
}

struct digit * sortedCopy(struct digit * start){
    struct digit *ptr = start;
    struct digit *sortedStart=NULL;
    struct digit *newDigit;

    if (start!=NULL)
    {
        sortedStart = createDigit(start->num);
        ptr = start->next;
    }
    while (ptr != NULL)
    {
        newDigit = createDigit(ptr->num);
        sortedStart = insertIntoSorted(sortedStart, newDigit);
        ptr = ptr->next;
    }
    return(sortedStart);
}

// Write your countRedun() function here
short countRedun(struct digit *start)
{
    short counter = 0;
    struct digit *sorted = sortedCopy(start);
    struct digit *ptr = sorted;
    int prev = -1;

    while (ptr != NULL) 
    {
        if (ptr->num == prev) {counter++;}
        else {prev = ptr->num;}
        ptr = ptr->next;
    }

    freeNumber(sorted);
    return counter;
}