#include <stdio.h>
int main()
{
    int user_integer;
    float user_float;
    char user_character;

    printf("Please enter an integer value: ");
    scanf("%d", &user_integer);
    printf("You entered %d\n", user_integer);

    printf("Please enter a float value: ",user_float);
    scanf("%f", &user_float);
    printf("You entered %.1f\n", user_float);

    printf("Please enter a character value: ",user_character);
    scanf(" %c", &user_character);
    printf("You entered %c\n", user_character);

    return 0;
}