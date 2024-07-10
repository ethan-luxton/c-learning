#include <stdio.h>

int main()
{
    // *** BASIC DATA TYPES ***

    // int stores 2 or 4 bytes, whole numbers, without decimals
    // float stores 4 bytes, fractional numbers containing 6-7 decimal digits
    // double stores 8 bytes, fractional numbers containing up to 15 decimal digits
    // char stores 1 byte, containing a single character/letter/number or ASCII value

    // *** FORMAT SPECIFIERS ***

    // %d or %i specify int data types
    // %f or %F specify float data types
    // %lf specify double data types
    // %c specify char data types
    // %s speficy string data types.

    // Prints ASCII chars A B and C
    char a = 65, b = 66, c = 67;

    // Prints whole strings

    char myString[] = "Hello\n";

    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);
    printf("%s", myString);
    return 0;
}