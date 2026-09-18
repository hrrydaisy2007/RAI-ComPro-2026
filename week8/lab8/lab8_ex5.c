#include <stdio.h>

void calculate_even_odd_stats(const double arr[], int n) {
    double even_sum = 0, odd_sum = 0;
    int even_count = 0, odd_count = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even_sum += arr[i];
            even_count++;
        } else {
            odd_sum += arr[i];
            odd_count++;
        }
    }

    printf("Output:\n");
    if (even_count > 0) {
        printf("Even index elements -> Sum: %.0f, Average: %.2f\n", even_sum, even_sum / even_count);
    } else {
        printf("Even index elements -> Sum: 0, Average: 0.00\n");
    }

    if (odd_count > 0) {
        printf("Odd index elements -> Sum: %.0f, Average: %.2f\n", odd_sum, odd_sum / odd_count);
    } else {
        printf("Odd index elements -> Sum: 0, Average: 0.00\n");
    }
}

int main(void) {
    int n;
    printf("N: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    double arr[n];
    for (int i = 0; i < n; i++) {
        printf("Input: ");
        scanf("%lf", &arr[i]);
    }

    calculate_even_odd_stats(arr, n);
    return 0;
}