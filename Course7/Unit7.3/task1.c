#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Invalid input.\n");
    }
    else
    {
        int numPlants = atoi(argv[1]);
        double price = atof(argv[2]);
        double sum = price * numPlants;
        printf("%d plants for %.2lf dollars each cost %.2lf dollars.", numPlants, price, sum);
    }    
    return 0;
}