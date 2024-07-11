#include <stdbool.h>
#include <stdio.h>
int main()
{
    bool thisIsTrue = true;
    bool thisIsFalse = false;

    printf("True: %d\n", thisIsTrue);
    printf("False: %d\n", thisIsFalse);
    printf("True: %d\n", 10 > 9); // True
    printf("True: %d\n", (10 > 9) == thisIsTrue); // True

    return 0;
}