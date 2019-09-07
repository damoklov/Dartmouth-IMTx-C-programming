#include <stdio.h>


void convertMeters(double);
void convertGrams(double);
void convertCelsius(double);


int main(void)
{
    int num;
    scanf("%d", &num);

    for(int i=0; i<num; i++)
    {
        double value;
        char letter;
        scanf("%lf %c", &value, &letter);

        switch(letter)
        {
            case 'm':
                convertMeters(value);
                break;
            case 'g':
                convertGrams(value);
                break;
            case 'c':
                convertCelsius(value);
                break;
            default:
                break;
        }
        
    }
    return 0;
}

void convertMeters(double value)
{
    double result = value * 3.2808;
    printf("%.6lf ft\n", result);
}

void convertGrams(double value)
{
    double result = value * 0.002205;
    printf("%.6lf lbs\n", result);
}

void convertCelsius(double value)
{
    double result = (value * 1.8) + 32.0;
    printf("%.6lf f\n", result);
}