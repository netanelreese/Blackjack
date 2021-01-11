#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

void start();
void blackjack();
char keepPlaying();
void goodbye();

enum Card : int {TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7
                    , EIGHT = 8, NINE = 9, TEN = 10, J = 10, Q = 10, K = 10, A};


int main() {
    start();
    goodbye();
    //blackjack();
    //keepPlaying();
    return 0;
}
void start() {
    cout << "00000000   0          000000    000000   0      0  0        000000    000000   0      0" << endl;
    cout << "0       0  0         0      0  0      0  0      0  0          0      0  0      0  0      0" << endl;
    cout << "0       0  0         0      0  0      0  0      0  0          0      0  0      0  0      0" << endl;
    cout << "0       0  0         0      0  0         0     0   0          0      0  0         0     0 " << endl;
    cout << "00000000   0         00000000  0         000000    0          00000000  0         000000  " << endl;
    cout << "0       0  0         0      0  0         0     0   0          0      0  0         0     0 " << endl;
    cout << "0       0  0         0      0  0      0  0      0  0       0  0      0  0      0  0      0" << endl;
    cout << "0       0  0         0      0  0      0  0      0  0       0  0      0  0      0  0      0" << endl;
    cout << "00000000   00000000  0      0   000000   0      0   0000000   0      0   000000   0      0" << endl;

}
char keepPlaying() {
    char choice = 's';

    while (choice != 'y' || choice != 'n') {
        cout << "\nDo you wanna keep playing?(y/n)" << endl;
        cin >> choice;
        if (choice == 'y') {
            return 'y';
        }
        else if (choice == 'n') {
            return 'n';
        }
        else {
            cout << "Invalid Input." << endl;
        }
    }
}
void goodbye() {
    int miliseconds = 3000; //3 seconds in miliseconds
    cout << "Thank you, goodbye :)" << endl;
    Sleep(miliseconds); //shows the end card for three seconds before closing;
}