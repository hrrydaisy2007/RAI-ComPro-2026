#include <stdio.h>

struct Student {
    char name[21];
    int id;
    float grades[4];
    float average;
};

int main(void) {
    struct Student students[3];
    char subject_names[4][10] = {"Math", "English", "Science", "History"};
    float subject_sums[4] = {0.0f, 0.0f, 0.0f, 0.0f};
    float subject_avgs[4];

    for (int i = 0; i < 3; i++) {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        scanf("%s %d %f %f %f %f",
            students[i].name,
            &students[i].id,
            &students[i].grades[0],
            &students[i].grades[1],
            &students[i].grades[2],
            &students[i].grades[3]);

        float total = 0.0f;
        for (int j = 0; j < 4; j++) {
            total += students[i].grades[j];
            subject_sums[j] += students[i].grades[j]; 
        }

        students[i].average = total / 4.0f; 
        printf("\n");
    }

    printf("Student Averages:\n");
    int top_student = 0;
    for (int i = 0; i < 3; i++) { 
        printf("%s (ID: %d): %.2f\n", students[i].name, students[i].id, students[i].average);
        if (students[i].average > students[top_student].average) {
            top_student = i;
        }
    }

    printf("\n");
    printf("Top Student: %s with %.2f\n\n",
        students[top_student].name,
        students[top_student].average);

    printf("Subject Averages:\n");
    int top_subject = 0;
    for (int j = 0; j < 4; j++) {
        subject_avgs[j] = subject_sums[j] / 3.0f;
        printf("%s: %.2f\n", subject_names[j], subject_avgs[j]);
        if (subject_avgs[j] > subject_avgs[top_subject]) {
            top_subject = j;
        }
    }

    printf("\nTop Subject: %s with average %.2f\n",
        subject_names[top_subject], 
        subject_avgs[top_subject]);

    return 0;
}