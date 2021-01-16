/*
 * Author: Nathanael Reese
 * Version: 0.1
 */
#include <iostream>
#include <string>
#include <windows.h>


using namespace std;

int bank = 100;
int softNum = 17;

void title();
string lowercase(string input);
int prompt();
void settings();
void blackjack();
char keepPlaying();
void goodbye();

enum Card : int {TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7
                    , EIGHT = 8, NINE = 9, TEN = 10, J = 10, Q = 10, K = 10, A};


int main() {
    int promptResult;

    title(); //calling title function
    prompt(); // calling prompt function for asking what the user wants to do
    goodbye(); // calling goodbye function
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
int prompt() {
    string choice;
    cout << "Enter your choice:" << endl;
    cout << "Start     Settings     Exit" << endl;

    getline(cin, choice); //retrieving input from user
    choice = lowercase(choice); //converting input to lowercase
    cout << "\n" << endl;

    if (choice == "settings") { //settings route
        settings();
        return 1;
    }
    else if (choice == "start"){ //start game rout
        blackjack();
        return 0;
    }
    else if (choice == "exit") {
        //leaving the prompt menu
    }
    else { //invalid input, recursively calls function until valid input is entered
        cout << "Invalid Input." << endl;
        prompt();
    }
}
void settings() {
    string choice = "";

    cout << "Bank size is: $" << bank << endl; //showing the current bank size
    cout << "What setting do you want to change (type bank or exit to leave settings)" << endl; //prompting user for choice
    getline(cin, choice); // retrieving input
    choice = lowercase(choice); //converting input to lowercase

    if (choice == "bank") {
        cout << "Enter bank amount: " << endl;
        cin >> bank;
        settings();
    }
    else if (choice == "exit") {
        prompt(); //exits settings menu and goes back to prompt menu to start game
    }

}
void blackjack() {

}
string lowercase(string input) {
    string lower = input;
    int i = 0;
    char c;
    while(lower[i]) {
        c = lower[i];
        lower[i] = tolower(c);
        i++;
    }
    return lower;
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
    int countdown = 250; //3 seconds in miliseconds
    cout << "Thank you, goodbye :)" << endl;
    cout << "3";
    Sleep(countdown); //shows the end card for three seconds before closing;
    cout << ".";
    Sleep(countdown);
    cout << ".";
    Sleep(countdown);
    cout << ".";
    Sleep(countdown);
    cout << "2";
    Sleep(countdown); //shows the end card for three seconds before closing;
    cout << ".";
    Sleep(countdown);
    cout << ".";
    Sleep(countdown);
    cout << ".";
    Sleep(countdown);
    cout << "1";
    Sleep(countdown); //shows the end card for three seconds before closing;
    cout << ".";
    Sleep(countdown);
    cout << ".";
    Sleep(countdown);
    cout << ".";
    Sleep(countdown);
}