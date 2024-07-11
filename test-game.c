#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
    int myNum;
    srand(time(NULL));
    int x = 10, y = 1;
    int num = (rand() % (x - y + 1) + y);
    printf("Type a number:\n");
    for (int i = 5; i > 0; i) {
        
        while (scanf("%d", &myNum) != num) {
            
            printf("%d tries left\n", i--);
            if (myNum != num) {
                printf("You\'re wrong :(\n");
                if (i == 0 && myNum != num) {
                    printf("You lose :( the number was %d\n", num);
                    return 0;
                }
                continue;
            } else if (myNum == num) {
                printf("You're correct! The number is %d!\n", myNum);
                return 0;
            } 
            
        }
        
        
    }
    
    
    return 0;
}