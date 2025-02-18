#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    float volume, radius, cubedradius;
    volume = 0.0f;
    radius = 0.0f;
    cubedradius = 0.0f;
    
    printf("Enter the radius: ");
    scanf("%f", &radius); //send radius input to memory space for variable

    cubedradius = radius * radius * radius; // cant put the cubing up top or it will make it all 0
    volume = (4.0f/3.0f) * PI * cubedradius;
    printf("The volume is %0.2f!\n", volume); //0.2 specifies how many decimal points
    return 0;
}
