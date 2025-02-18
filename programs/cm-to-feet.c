// Replace ___ with your code
#include<stdio.h>
  
int main(void) {  
 
    double centimeter;
    centimeter = 0;
    // get double input value
    printf("Enter amount of cm to convert: ");
    scanf("%lf", &centimeter);

    // convert centimeter to feet
    double feet;
    feet = 0;
    feet = centimeter * 0.0328;
    
    // print the result in feet
    printf("%.2lf", feet);
 
    return 0;  
}
