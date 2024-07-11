#include <stdio.h>

int main()
{
    int myNumbers[] = {25, 50, 75, 100};

    int allTheNumbers[2][3] = {{1, 2 , 4}, {3, 6, 8}};

    printf("%d\n", allTheNumbers[0][2]); // Should be 4

    for (int i = 0; i <= 3; i++) {
        printf("%d\n", myNumbers[i]);
    };

    printf("Size of array: %lu\n", sizeof(myNumbers));
    
    return 0;
}