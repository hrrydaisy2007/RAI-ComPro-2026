#include<stdio.h>
int main()
{
    int array[5];
    int size = 5;

    printf("Enter 5 integers: ");
    for (int i = 0; i < size; i++){
        scanf("%d", array + i);
    }
       
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++){
            if (*(array + j) < *(array + j + 1)) {
                int temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            }
        }
    }
    printf("Sorted: ");
    for (int i = 0; i < size; i++) {
        printf("%d", *(array + i));
        if (i < size - 1){
            printf(" ");
        }
    }
    printf("\n");

return 0;
}