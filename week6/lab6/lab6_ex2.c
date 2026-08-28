#include <stdio.h>

struct Student {
    char name[100];
    int age;
    float score;
};

int main(void) {
    struct Student students[3];

    
    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
      
        scanf(" %[^\n]", students[i].name);

        printf("Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);

        printf("\n");
    }
    int max = 0;
    for(int i = 1; i < 3; i++) {
        if (students[i].score > students[max].score) {
            max = i;
        }
    }
   
  
     printf("The highest scores belongs to %s at %.1f scores!",
            students[max].name, students[max].score);
    

    return 0;
}