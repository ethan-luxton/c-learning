#include <stdio.h>

int main() 
{
    int x = 5;
    int y = 6;
    if (x == y) {
        printf("Hello this is true!\n");
    } else {
        printf("Hello this is not true!\n");
    }

    if (x == y) {
        printf("C is pretty simple so far\n");
    } else if (y > x) {
        printf("Wow this hits too!\n");
    }
    return 0;
}