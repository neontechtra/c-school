#include <stdio.h>

int main(void)
{
    int month, day, year;
    month = 0;
    day = 0;
    year = 0;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("%d%d%d", year, month, day);
}

