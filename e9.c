#include <stdio.h>

int main() {
    int year, day;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Calculate the number of leap years since 0 AD
    int leapYears = (year / 4) - (year / 100) + (year / 400);

    // Calculate the total number of days since 01/01/01
    int totalDays = (year - 1) * 365 + leapYears;

    // Calculate the day of the week (0 = Monday, 1 = Tuesday, ..., 6 = Sunday)
    day = (totalDays % 7);

    printf("The 1st of January %d was a ", year);
    switch (day) {
        case 0:
            printf("Monday.\n");
            break;
        case 1:
            printf("Tuesday.\n");
            break;
        case 2:
            printf("Wednesday.\n");
            break;
        case 3:
            printf("Thursday.\n");
            break;
        case 4:
            printf("Friday.\n");
            break;
        case 5:
            printf("Saturday.\n");
            break;
        case 6:
            printf("Sunday.\n");
            break;
    }

    return 0;
}