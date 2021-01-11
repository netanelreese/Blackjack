#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

void start();
void game();
char keepPlaying();
void goodbye();


int main() {
    start();
    game();
    keepPlaying();
    return 0;
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