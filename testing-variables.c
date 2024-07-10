#include <stdio.h>

int main() 
{   
    // Variable names use camel casing, i.e, myVariable
    // Reserved words such as 'int', 'char' or 'float' cannot be used as variable names



    // Numbers start with 'int'
    int num = 15;
    int numTwo = 15;
    // Float numbers start with 'float'
    float floatNum = 5.99;
    // Can declare more than one variable by using commas
    int x = 5, y = 10, z = 15;
    int length = 5, width = 13;
    int area = length * width;
    // Characters start with 'char'
    char letter = 'D';
    // %d is used for num, %f is used for float, %c is used for character, %s is used for string.
    printf("%d\n", num);
    printf("%f\n", floatNum);
    printf("My favorite number is %d\n", num / numTwo);
    printf("My number is %d and my letter is %c\n", num, letter);
    printf("%d\n", x + y + z);
    printf("\nLength is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area is: %d\n", area);




    return 0;
}