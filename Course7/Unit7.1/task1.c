#include <stdio.h>

double ctof(int);
// insert prototype for function ftoc() here
double ftoc(int);
// insert prototype for function ctof() here


int main(void) {

    int usertemp;
    char unit;
    double convertedtemp;

    scanf("%d %c", &usertemp, &unit);
    if (unit=='C'){
        convertedtemp = ctof(usertemp);
        // insert function call here to convert usertemp 
           /* from Celsius to Fahrenheit and store the result in convertedtemp */
        printf("%.1lf F", convertedtemp);
        // complete this line to print out the conversion result

    } else if (unit=='F'){
        convertedtemp = ftoc(usertemp);
        // insert function call here to convert usertemp 
           /* from Fahrenheit to Celsius and store the result in convertedtemp */
        printf("%.1lf C", convertedtemp);
        // complete this line to print out the conversion result
        
    }

    return 0;

}

/* Function definitions below are provided for you*/

double ctof(int x){

    return((9.0/5)*x+32);
}

double ftoc(int x){

    return(5.0/9*(x-32));
}