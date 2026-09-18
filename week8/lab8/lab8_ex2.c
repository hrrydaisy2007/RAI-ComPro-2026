#include <stdio.h>

int is_palindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return original == reversed;
}

void process_palindromes(int start, int end) {
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("The palindrome numbers within the interval [%d, %d] are:\n", start, end);
    int count = 0;
    long long sum = 0;

    for (int i = start; i <= end; i++) {
        if (is_palindrome(i)) {
            printf("%d ", i);
            count++;
            sum += i;
        }
    }
    printf("\nTotal palindrome numbers: %d\n", count);
    printf("Sum of palindrome numbers: %lld\n", sum);
}

int main(void) {
    int start, end;
    printf("Enter the start and end numbers: ");
    if (scanf("%d %d", &start, &end) == 2) {
        process_palindromes(start, end);
    }
    return 0;
}