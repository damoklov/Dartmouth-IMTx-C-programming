#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    int vertices;
    scanf("%d", &vertices);

    struct point *pt = (struct point *) malloc(vertices * sizeof(struct point));
    
    initializePoly(pt, vertices);
    printPoly(pt, vertices);
    
    free(pt);
    return 0;
    // Fill in your main function here
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point * pt, int vertices)
{
    for (int i=0; i<vertices; i++)
    {
        pt[i].x = -i;
        pt[i].y = i*i; 
    }
}
// Write your initializePoly() function here
