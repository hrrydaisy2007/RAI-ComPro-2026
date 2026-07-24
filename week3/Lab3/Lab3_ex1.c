#include <stdio.h>
int main(){
    int num1, num2, choice;
    printf("Enter a number: ");
    scanf(" %d" , &num1);
    printf("Enter a number: ");
    scanf(" %d" , &num2);

    switch (num1 == num2) {
        case 1:
            printf("Match\n");
            break;
        case 0:
            printf("Does not match. Try again\n");
            break;
    }

    return 0;
}