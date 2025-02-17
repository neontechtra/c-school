#include <stdio.h>

int main(void)
{
    //set our ints
    int inumber, month, day, year;
    inumber = 0;
    month = 0;
    day = 0;
    year = 0;

    // set any floats
    float uprice;
    uprice = 0;

    //get our data
    //item num
    printf("Enter Item Number: ");
    scanf("%d", &inumber);
    //unit price
    printf("Enter Unit Price: $");
    scanf("%f", &uprice);
    //purchase date
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    //print results
    printf("Item \tUnit  \tPurchase\n");
    printf("     \tPrice \tDate\n");
    printf("%d   \t%.2f  \t%d/%d/%d", inumber, uprice, month, day, year);

    return 0;

}

