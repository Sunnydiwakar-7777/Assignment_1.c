#include <stdio.h>
int main()
{
    int hour, min;
    printf("Enter a time HH:MM format\n");
    scanf("%d:%d", &hour, &min);

    printf("Hour %d and  %d Minute ", hour, min);

    return 0;
}