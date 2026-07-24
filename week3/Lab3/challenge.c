#include <stdio.h>
int main(){
    int cal_score, phy_score, compro_score;

    printf("Calculus score: ");
    scanf("%d", &cal_score);

    printf("Physic score: ");
    scanf("%d", &phy_score);

    printf("Compro score: ");
    scanf("%d", &compro_score);

    char cal_grade, phy_grade, compro_grade;
    float cal_num, phy_num, compro_num;
    
    if (cal_score >= 80) { cal_grade = 'A', cal_num = 4.0;}
    else if (cal_score >= 70) { cal_grade = 'B', cal_num = 3.0;}
    else if (cal_score >= 60) { cal_grade = 'C', cal_num = 2.0;}
    else if (cal_score >= 50) { cal_grade = 'D', cal_num = 1.0;}
    else  { cal_grade = 'F', cal_num = 0.0;}

    if (phy_score >= 80) { phy_grade = 'A', phy_num = 4.0;}
    else if (phy_score >= 70) { phy_grade = 'B', phy_num = 3.0;}
    else if (phy_score >= 60) { phy_grade = 'C', phy_num = 2.0;}
    else if (phy_score >= 50) { phy_grade = 'D', phy_num = 1.0;}
    else  { phy_grade = 'F', phy_num = 0.0;}

    if (compro_score >= 80) { compro_grade = 'A', compro_num = 4.0;}
    else if (compro_score >= 70) { compro_grade = 'B', compro_num = 3.0;}
    else if (compro_score >= 60) { compro_grade = 'C', compro_num = 2.0;}
    else if (compro_score >= 50) { compro_grade = 'D', compro_num = 1.0;}
    else  { compro_grade = 'F', compro_num = 0.0;}
    
    float gpa = (cal_num + phy_num + compro_num) /3.0;

    printf("\n");
    printf("%-12s %-8s %-8s %-8s\n ", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------------\n");
    printf("%-12s %-8d %-8c %-8.1f\n ", "Cal", cal_score, cal_grade, cal_num);
    printf("%-12s %-8d %-8c %-8.1f\n ", "Physics", phy_score, phy_grade, phy_num);
    printf("%-12s %-8d %-8c %-8.1f\n ", "compro", compro_score, compro_grade, compro_num);

    printf("\nGPA: %.1f\n", gpa);

    return 0;

}