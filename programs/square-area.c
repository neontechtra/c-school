// Replace ___ with your code
#include <stdio.h>

int main(void) {
    int length;
    int breadth;
    length = 0;
    breadth = 0;

    // get length and breadth input
    printf("what is the length?: ");
    scanf("%d", &length);
    printf("what is the breadth?: ");
    scanf("%d", &breadth);

    // find the area
    int area;
    area = 0;
    area = length * breadth;

    // print the area
    printf("%d", area);

    return 0;
}
