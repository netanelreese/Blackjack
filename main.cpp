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
int startMenu();
void settings();
void blackjack();
char keepPlaying();
void goodbye();

enum Card : int {TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7
                    , EIGHT = 8, NINE = 9, TEN = 10, J = 10, Q = 10, K = 10, A};

class Hand {
    string hand;
    int cardNum;
    int numCards;
    int total;
    int max = 10;
    int min = 0;

    Hand() {
        drawCard();//drawing two cards for initial hand
        drawCard();
    }
    void draw() {
        cardNum = rand() % max + min;
        numCards++;

        switch(cardNum) { //switch statement to generate random number and add the respective card to the hand
            case 0:
                hand.append("A");
                total += 11;
                if (total > 21) {
                    total -= 10;
                }
                break;
            case 1:
                hand.append("2");
                total += 2;
                break;
            case 2:
                hand.append("3");
                total += 3;
                break;
            case 3:
                hand.append("4");
                total += 4;
                break;
            case 4:
                hand.append("5");
                total += 5;
                break;
            case 5:
                hand.append("6");
                total += 6;
                break;
            case 6:
                hand.append("7");
                total += 7;
                break;
            case 7:
                hand.append("8");
                total += 8;
                break;
            case 8:
                hand.append("9");
                total += 9;
                break;
            case 9:
                hand.append("10");
                total += 10;
                break;
            case 10:
                hand.append("J");
                total += 10;
                break;
            case 11:
                hand.append("Q");
                total += 10;
                break;
            case 12:
                hand.append("K");
                total += 10;
                break;
        }
    }
    void drawCard() {
        if (numCards == 1) {
            draw();
        }
        else {
            hand.append(", ");
            draw();
        }
    }
    string getHand() {
        return hand;
    }
    int getTotal() {
        return total;
    }
};

int main() {
    int promptResult;

    title(); //calling title function
    startMenu(); // calling prompt function for asking what the user wants to do
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
int startMenu() {
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
        startMenu();
    }
}
void settings() { //FIXME : When through with the bank function the program goes through and doesnt take any input
    string choice;

    cout << "Bank size is: $" << bank << endl; //showing the current bank size
    cout << "What setting do you want to change: (type bank or exit to leave settings)" << endl; //prompting user for choice
    getline(cin, choice); // retrieving input
    choice = lowercase(choice); //converting input to lowercase

    if (choice == "bank") {
        cout << "Enter bank amount: " << endl;
        cin >> bank;
        settings();
    }
    else if (choice == "exit") {
        startMenu(); //exits settings menu and goes back to prompt menu to start game
    }
    else {
        cout << "Invalid input." << endl;
        settings();
    }

}
void blackjack() {
    string inputBet;
    int betAmount;

    cout << "Enter bet amount: " << endl;
    getline(cin, inputBet);

    cout << "Bet amount is: $" << betAmount << "\n" << endl;


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