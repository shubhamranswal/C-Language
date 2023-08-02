#include<stdio.h>

void main(){
    int initialDay;
    printf("Sun -> 0\nMon -> 1\nTues -> 2\nWed -> 3\nThu -> 4\nFri -> 5\nSat -> 6\n\n");
    printf("Enter the day: ");
    scanf("%d", &initialDay);
    int addDays;
    printf("\nEnter the number of days: ");
    scanf("%d", &addDays);
    int x = (initialDay + addDays) % 7;
    switch (x){
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        default:
            break;
    }
}