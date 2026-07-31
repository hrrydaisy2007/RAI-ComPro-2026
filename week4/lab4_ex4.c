#include <stdio.h>

int main  () {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);

    for (int i = 1; i <= 12; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }
   
    
    return 0;
}