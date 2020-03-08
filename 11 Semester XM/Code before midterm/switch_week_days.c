//C program to print name of day using switch case statement

#include <stdio.h>

int main() {
    int day;
    /*
     * Take the Day number as input form user
     */
    printf("Enter Day Number (1 = Monday ..... 7 = Sunday)\n");
    scanf("%d", &day);

    switch(day){
        case 1 : printf("Monday\n");
            break;
        case 2 : printf("Tuesday\n");
            break;
        case 3 : printf("Wednesday\n");
            break;
        case 4 : printf("Thursday\n");
            break;
        default: printf("Invalid Input !!!!\n");break;
        case 5 : printf("Friday\n");
            break;
        case 6 : printf("Saturday\n");
            break;
        case 7 : printf("Sunday\n");


    }

    return 0;
}
