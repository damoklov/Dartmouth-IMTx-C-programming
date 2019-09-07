#include <stdio.h>

int main(void)
{
    int boxes, sizeEach, fullBoxes, remainder;
    scanf("%d\n%d", &boxes, &sizeEach);
    fullBoxes = boxes/sizeEach;
    remainder = boxes%sizeEach;
    printf("%d\n%d", fullBoxes, remainder);
    return 0;
}