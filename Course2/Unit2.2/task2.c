#include <stdio.h>


int main(void)
{
    int cars;
    double weight;
    
    scanf("%d\n", &cars);
    double arr[cars], resultArr[cars];
    
    for(int i=0; i<cars; i++)
    {
        scanf("%lf", &weight);
        arr[i] = weight;
        resultArr[i] = 22.0 - arr[i];
    }
    for(int j=0; j<cars; j++)
    {
        printf("%.1lf\n", resultArr[j]);
    }
    return 0;
}