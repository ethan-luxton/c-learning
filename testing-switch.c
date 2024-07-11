#include <stdio.h>

int main()
{
    int day;
    for (int i = 0; i <=7; i++) { // Jumping ahead a bit to test for loop + switch case. Very similar to JavaScript.
        day = i;
        switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        }
    }

    

    return 0;
}