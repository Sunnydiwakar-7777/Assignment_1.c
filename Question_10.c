#include <stdio.h>
int main()
{
    int hour, min;
    printf("Enter a time\n");
    scanf("%d:%d", &hour, &min);

    printf("hour %d and  %d minute ", hour, min);

    return 0;
}