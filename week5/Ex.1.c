#include <stdio.h>

int main() {
    int matrix[3][3];
    int i = 0, j = 0;

    while (j < 3) {
        j = 0;
        while (j < 3) {
            printf("Enter numbers [%d] [%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
            j++;
        }
        i++;
    }
    printf("\n***Matrix***\n");
    i = 0;
    while (i < 3) {
        j = 0;
        while (j < 3) {
            printf("%d   ", matrix[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
   

    return 0;
}