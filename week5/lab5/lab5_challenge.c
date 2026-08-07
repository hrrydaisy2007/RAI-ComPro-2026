#include <stdio.h>

int main(void) {
    int n;

    printf("Input:\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOutput:\n");
    for (int i = 0; i < n; i++) {
       
        int already_counted = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                already_counted = 1;
                break;
            }
        }
        if (already_counted) {
            continue;
        }

       
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);
    }

    return 0;
}