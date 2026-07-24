#include <stdio.h>
int main() {
    int num1, num2, choice;
    printf("Enter Num1 : ");
    scanf(" %d", &num1);

    printf("Enter Num2 : ");
    scanf(" %d", &num2);

    printf("Calculator Menu : ");
    printf(" 1. +\n");
    printf(" 2. -\n");
    printf(" 3. *\n");
    printf(" 4. /\n");
    printf(" 5. %%\n");

    printf("Choose menu : %d\n");
    scanf(" %d", &choice)
    
    switch (choice) {
        case 1:
            ans = num1 + num2;
            printf("Ans : Num1 + Num2 = %d", ans);
            break;
        case 2:
            ans = num1 - num2;
            printf("Ans : Num1 - Num2 = %d", ans);
            break;
        case 3:
            ans = num1 * num2;
            printf("Ans : Num1 * Num2 = %d", ans);
            break;
        case 4:
            ans = num1 / num2;
            printf("Ans : Num1 / Num2 = %d", ans);
            break;
        case 5:
            ans = num1 % num2;
            printf("Ans : Num1 % Num2 = %d" , ans);
            break;
    }

    return 0;
}