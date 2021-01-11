#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

int bank;

void title();
void lowercase(string input);
void prompt();
void blackjack();
char keepPlaying();
void goodbye();

enum Card : int {TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7
                    , EIGHT = 8, NINE = 9, TEN = 10, J = 10, Q = 10, K = 10, A};


int main() {
    title(); //calling title function
    prompt(); // calling prompt function for asking what the user wants to do
    goodbye(); // calling goodbye function
    //blackjack();
    //keepPlaying();
    return 0;
}
void title() {
    cout << "00000000   0          000000    000000   0      0  0           000000    000000   0      0" << endl;
    cout << "0       0  0         0      0  0      0  0      0  0          0      0  0      0  0      0" << endl;
    cout << "0       0  0         0      0  0      0  0      0  0          0      0  0      0  0      0" << endl;
    cout << "0       0  0         0      0  0         0     0   0          0      0  0         0     0 " << endl;
    cout << "00000000   0         00000000  0         000000    0          00000000  0         000000  " << endl;
    cout << "0       0  0         0      0  0         0     0   0          0      0  0         0     0 " << endl;
    cout << "0       0  0         0      0  0      0  0      0  0       0  0      0  0      0  0      0" << endl;
    cout << "0       0  0         0      0  0      0  0      0  0       0  0      0  0      0  0      0" << endl;
    cout << "00000000   00000000  0      0   000000   0      0   0000000   0      0   000000   0      0" << endl;
    //title screen with author
    cout << "\nProgrammed by: Nathanael Reese" << endl;

}
void prompt() {
    string choice;
    cout << "\n" << endl;
    cout << "Enter your choice:" << endl;
    cout << "Start     Settings" << endl;

    getline(cin, choice);
    lowercase(choice);
    if (choice == "settings") {
        cout << choice << endl;
    }
    else if (choice == "start"){
        cout << "Game on B^)" << endl;
    }
}
void lowercase(string input) {
    for (int i = 0; i < input.length(); ++i) {
        input.at(i) = tolower(input.at(i));
    }
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
    cout << "3";
    Sleep(1000); //shows the end card for three seconds before closing;
    cout << "2";
    Sleep(1000);
    cout << "1";
    Sleep(1000);
}