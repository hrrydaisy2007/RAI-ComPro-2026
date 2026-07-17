#include <stdio.h>
int main()
{ 
    char name[50];
    int id;
    float score_programming;
    float score_physics;
    float score_calculus;
    float GPA;

    printf("Enter your Name: ");
    scanf(" %[^\n]", name);

    printf("Enter your student ID: ");
    scanf("%d", &id);

    printf("Enter your Programming score: ");
    scanf("%f", &score_programming);

    printf("Enter your Physics score: ");
    scanf("%f", &score_physics);

    printf("Enter your Calculus score: ");
    scanf("%f", &score_calculus);

    GPA = (score_programming + score_physics + score_calculus)/3 ;



    printf("Hi %s(%d)! Your GPA is %.2f", name, id, GPA);

    return 0;
}
