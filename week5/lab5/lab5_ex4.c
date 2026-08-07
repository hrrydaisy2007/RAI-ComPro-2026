#include <stdio.h>

int main() {
   int arr[10];
   int even_count = 0;
   int odd_count = 0;

   for (int i = 0; i < 10; i++) {
    printf("Enter value %d: ", i + 1);
    scanf("%d", &arr[i]);

    if (arr[i] % 2 == 0) {
        even_count++;
    } else {
        odd_count++;
    }
   }

   printf("Even number: %d\n", even_count);
   printf("Odd numbers: %d\n", odd_count);

   return 0;
}