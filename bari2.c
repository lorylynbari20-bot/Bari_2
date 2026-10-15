#include <stdio.h>

int main(void)
{
    char name[100];
    double average;
    int absences;
    int qualified = 1;

    printf("Enter applicant's name: ");
    if (scanf(" %99[^\n]", name) != 1) {
        fprintf(stderr, "Invalid name.\n");
        return 1;
    }

    printf("Enter general average: ");
    if (scanf("%lf", &average) != 1) {
        fprintf(stderr, "Invalid general average.\n");
        return 1;
    }

    printf("Enter number of absences: ");
    if (scanf("%d", &absences) != 1 || absences < 0) {
        fprintf(stderr, "Invalid number of absences.\n");
        return 1;
    }

    printf("\nApplicant: %s\n", name);

    if (average >= 90.0 && absences <= 2) {
        printf("Qualified\n");
    } else {
        printf("Not Qualified\n");
        if (average < 90.0) {
            printf("Requirement not satisfied: general average must be at least 90.\n");
        }
        if (absences > 2) {
            printf("Requirement not satisfied: absences must not exceed 2.\n");
        }
    }

    return 0;
}