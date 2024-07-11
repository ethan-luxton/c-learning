#include <stdio.h>

int main() 
{
    int x = 0; // Initialize x
    x &= 3; 
    int y = 1; // Initialize y
    y = y & 3; 
    int z = x ^ y;
    printf("%d\n", x); 
    printf("%d\n", y); 
    printf("%d\n", z); 
    return 0;
}