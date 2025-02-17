#include <stdio.h>

int main(void)
{
    int area, pre, suffix;
    area = 0;
    pre = 0;
    suffix = 0;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &area, &pre, &suffix);
    printf("%d.%d.%d", area, pre, suffix);
    return 0;
}
