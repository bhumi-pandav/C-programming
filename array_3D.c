#include <stdio.h>

int main() {
    int schools, classes, students;

    printf("Enter the number of schools: ");
    scanf("%d", &schools);

    printf("Enter the number of classes per school: ");
    scanf("%d", &classes);

    printf("Enter the number of students per class: ");
    scanf("%d", &students);

    int schoolData[schools][classes][students];

    printf("\nEnter student data for each school, class, and student:\n");
    for (int i = 0; i < schools; i++) {
        for (int j = 0; j < classes; j++) {
            for (int k = 0; k < students; k++) {
                printf("School %d, Class %d, Student %d: ", i + 1, j + 1, k + 1);
                scanf("%d", &schoolData[i][j][k]);
            }
        }
    }

    printf("\n--- School Data Representation ---\n");
    for (int i = 0; i < schools; i++) {
        printf("School %d:\n", i + 1);
        for (int j = 0; j < classes; j++) {
            printf("  Class %d: [", j + 1);
            for (int k = 0; k < students; k++) {
                printf("%d", schoolData[i][j][k]);
                if (k < students - 1) {
                    printf(", ");
                }
            }
            printf("]\n");
        }
        printf("\n");
    }

    return 0;
}