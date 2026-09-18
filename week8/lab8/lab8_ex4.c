#include <stdio.h>

void count_characters(char str[]) {
    int letters = 0, digits = 0, special = 0;

    for (int i = 0; str[i] != '\0'; i++) {
       
        if (str[i] == '\n') continue;

        
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            letters++;
        }
       
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        
        else {
            special++;
        }
    }

    printf("Output:\n");
    printf("Letters: %d\n", letters);
    printf("Digits: %d\n", digits);
    printf("Special Characters / Symbols: %d\n", special);
}

int main(void) {
    char str[100];

    printf("Input: ");
    fgets(str, sizeof(str), stdin);

    count_characters(str);

    return 0;
}