#include <stdio.h>

int main() {
   int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   int size = sizeof(original) / sizeof(original[0]);
   int reversed[9];

   for (int i = 0; i < size; i++) {
        reversed[i] = original[size - 1 - i];
   }

   printf("Reversed Array: ");
   for (int i = 0; i < size; i++) {
    printf("%d", reversed[i]);
    if (i < size - 1) {
        printf(" ");

    }
   }

   printf("\n");

    return 0;
}