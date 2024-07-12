#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    int userInput;
    cout << "\nEnter how many numbers to count in fibonacci: ";
    cin >> userInput;
    int numOne = 0;
    int numTwo = 1;
    cout << "\n" << numOne << "\n";
    cout << "\n" << numTwo << "\n";
    for (int i = 0; i <= userInput - 1; i++) {
        
        int current = numOne + numTwo;
        numOne = numTwo;
        numTwo = current;
        
        cout << "\n" << current << "\n";
        
        if (current == 1836311903) {
            return 0;
        }
    }
    return 0;
}   