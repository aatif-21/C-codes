#include <stdio.h>

int main() {
    int day;

    printf("Enter a number (1-7) to find the day of the week: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
            printf("1 -> Sunday\n");
            
        case 2:
            printf("2 -> Monday\n");
            
        case 3:
            printf("3 -> Tuesday\n");
            
        case 4:
            printf("4 -> Wednesday\n");
            
        case 5:
            printf("5 -> Thursday\n");
            
        case 6:
            printf("6 -> Friday\n");
            
        case 7:
            printf("7 -> Saturday\n");
            
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
