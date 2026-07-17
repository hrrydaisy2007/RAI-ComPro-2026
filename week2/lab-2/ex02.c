#include <stdio.h>
int main()
{
    int total_minutes;
    int hours;
    int minutes;

    printf("Enter total minutes: ");
    scanf("%d", &total_minutes);

    hours = total_minutes/60;
    minutes = total_minutes%60;
    printf("%d minutes is %d hours and %d minutes", total_minutes, hours, minutes);

    return 0;

}