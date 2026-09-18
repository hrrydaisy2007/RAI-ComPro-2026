#include <stdio.h>

typedef struct {
    char name[50];
    double grade;
} Student;

double calculate_average(Student students[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].grade;
    }
    return n > 0 ? sum / n : 0;
}

void find_min_max(Student students[], int n, int *highest_idx, int *lowest_idx) {
    *highest_idx = 0;
    *lowest_idx = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].grade > students[*highest_idx].grade) {
            *highest_idx = i;
        }
        if (students[i].grade < students[*lowest_idx].grade) {
            *lowest_idx = i;
        }
    }
}

char get_letter_grade(double grade) {
    if (grade >= 80) return 'A';
    if (grade >= 70) return 'B';
    if (grade >= 60) return 'C';
    return 'F';
}

int main(void) {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter grade of %s: ", students[i].name);
        scanf("%lf", &students[i].grade);
    }

    printf("--- Results ---\n");
    printf("Average grade: %.2f\n", calculate_average(students, n));

    int max_idx, min_idx;
    find_min_max(students, n, &max_idx, &min_idx);
    printf("Highest grade: %.0f (%s)\n", students[max_idx].grade, students[max_idx].name);
    printf("Lowest grade: %.0f (%s)\n", students[min_idx].grade, students[min_idx].name);

    printf("Students who passed:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].grade >= 60) {
            printf("%s - Grade %c\n", students[i].name, get_letter_grade(students[i].grade));
        }
    }

    return 0;
}