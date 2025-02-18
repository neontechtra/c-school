// Replace ___ with your code
#include <stdio.h>

int main(void) {
    double fahrenheit;
    fahrenheit = 0;
    // take double input for fahrenheit
    printf("enter temp in fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // convert fahrenheit temperature to celsius
    double celsius;
    celsius = 0;
    celsius = (fahrenheit - 32) * 5 / 9;
    // print the celsius temperature
    printf("%.2lf", celsius);

    return 0;
}
