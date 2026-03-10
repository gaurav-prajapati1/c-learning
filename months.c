#include <stdio.h>

int main() {
    int month;
    const char *monthName;
    int days;
    const char *season;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            monthName = "January";
            days = 31;
            season = "Winter";
            break;
        case 2:
            monthName = "February";
            days = 28;
            season = "Winter";
            break;
        case 3:
            monthName = "March";
            days = 31;
            season = "Spring";
            break;
        case 4:
            monthName = "April";
            days = 30;
            season = "Spring";
            break;
        case 5:
            monthName = "May";
            days = 31;
            season = "Spring";
            break;
        case 6:
            monthName = "June";
            days = 30;
            season = "Summer";
            break;
        case 7:
            monthName = "July";
            days = 31;
            season = "Summer";
            break;
        case 8:
            monthName = "August";
            days = 31;
            season = "Summer";
            break;
        case 9:
            monthName = "September";
            days = 30;
            season = "Fall";
            break;
        case 10:
            monthName = "October";
            days = 31;
            season = "Fall";
            break;
        case 11:
            monthName = "November";
            days = 30;
            season = "Fall";
            break;
        case 12:
            monthName = "December";
            days = 31;
            season = "Winter";
            break;
        default:
            printf("Invalid month number.\n");
            return 1;
    }

    printf("The name of the month: %s\n", monthName);
    printf("The number of days in that month: %d\n", days);
    printf("The season it belongs to: %s\n", season);

    return 0;
}
