// Replace ___ with your code
#include <stdio.h>

int main(void) {

    double km, miles;
    km = 0;
    miles = 0;
    // get input value for km
    printf("What km value would you like to convert?: ");
    scanf("%lf", &km);
    // convert kilometer to miles
    miles = km / 1.6;

    // print the distance in miles
    printf("%.0lf (rounded)", miles);
	
    return 0;
}
