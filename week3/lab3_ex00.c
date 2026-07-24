#include <stdio.h>
int main() {
    char name[100], surname[50], id[20];
    int lab, mid_term, final_exam, total;

    printf("Enter your Name Surname : ");
    scanf("%s %s", name, surname);

    printf("Enter your Student ID: ");
    scanf(" %s", id);

    printf("Enter your Score\n ");
    printf("\tLaboratory (15%%)  = ");
    scanf(" %d", &lab);
    printf("\tMidterm (35%%)  = ");
    scanf(" %d", &mid_term); 
    printf("\tFinal (50%%)    = ");
    scanf(" %d", &final_exam);

    total = lab+mid_term+final_exam;

    printf("Total (100%%)        = %d", total);

    return 0;
}