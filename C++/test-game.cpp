#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int x = 10, y = 1;
    int randNum = (rand() % (x - y + 1) + y);
    cout << randNum;
    int userInput;
    
    for (int i = 5; i > 0; i) {
        
        while (userInput != randNum) {
            cout << "\nType a number:\n";
            
            cin >> userInput;
            if (userInput == randNum && i != 0) {
                cout << "Correct! You win! :)\n";
                return 0;
            } else if (i == 0) {
                cout << "\nYou lose :(\n";
                return 0;
            };
            cout << "\nYou're wrong :(\n\n";
            cout << i << " tries left!\n";
            i--;
            
            continue;
            
        }
    }

    return 0;
}