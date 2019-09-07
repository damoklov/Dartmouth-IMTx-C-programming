#include <stdio.h>


int main(void)
{
    int num;
    scanf("%d\n", &num);
    double arrWeight[num], arrPrice[num], summ=0.0;

    for(int i=0; i<num; i++)
    {
        scanf("%lf", &arrPrice[i]);
    }
    for(int j=0; j<num; j++)
    {
        scanf("%lf", &arrWeight[j]);
    }
    for(int k=0; k<num; k++)
    {
        summ = summ + (arrWeight[k] * arrPrice[k]);   
    }
    printf("%.6lf", summ);
    return 0;
}