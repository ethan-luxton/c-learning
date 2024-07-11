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
    // Scientific numbers
    float f1 = 35e3;
    double d1 = 12e4;
    printf("%f\n", f1);
    printf("%lf\n", d1);
    // Memory size

    printf("%lu\n", sizeof(x));
    printf("%lu\n", sizeof(f1));
    printf("This is the size of 12 to the 10th power: %lu\n", sizeof(d1));

    // Type conversion, ex 5/2 = 2.5

    float sum = (float) 5 / 2;
    printf("%f\n", sum);

    // Real world example

    int maxScore = 500;
    int userScore = 423;

    float percentage = (float) userScore / maxScore * 100.0;
    // %.2f is the amount of decimal places the float integer uses. In this case, 2.
    printf("User's percentage is %.2f\n", percentage);

    // Constants can be used by implementing const before the variable:

    const float pi = 3.14;

    

    return 0;
}