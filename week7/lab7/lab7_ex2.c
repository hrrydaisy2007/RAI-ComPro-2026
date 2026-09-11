#include<stdio.h>
int main()
{
int a = 10;
int b = 20;
int c = 30;

printf("Before swap: a = %d, b = %d, c = %d\n", a, b, c);

int *ptr_a = &a;
int *ptr_b = &b;
int *ptr_c = &c;

int temp = *ptr_a;
*ptr_a = *ptr_b;
*ptr_b = *ptr_c;
*ptr_c = temp;

printf("After swap: a = %d, b = %d, c = %d\n", a, b, c);

return 0;
}