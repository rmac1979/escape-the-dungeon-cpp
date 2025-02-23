
/*
Author Ryan McCamy
Assignment:Choose your own adventrue
Descritption: Program is a simple choose your own text-based adventure fantasy game. The user will make decisions and the program will continue according to the users decisions.
 */

#include <iostream>
#include <string>
#include<limits>

using namespace std;

// Function to display the introduction
void displayIntroduction() {
    cout << "Welcome to Dungeon Adventure!" << endl;
    cout << "You are an adventurer who has just entered a dark, mysterious dungeon." << endl;
    cout << "Your goal is to find the legendary treasure, but there are dangerous creatures and traps ahead." << endl;
    cout << "Be careful with your choices and try to survive!" << endl;
}

// Function for the first decision point in the dungeon
void firstChoice() {
    int choice;
    cout << "\nYou enter a large hall with three doors. One to the left, one to the right, and one straight ahead." << endl;
    cout << "Which door do you choose?" << endl;
    cout << "1. Left Door" << endl;
    cout << "2. Right Door" << endl;
    cout << "3. Straight Ahead" << endl;
    cout << "Enter the number of your choice: ";
    
    while (true) {
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 3) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice! Please choose a valid door (1, 2, or 3): ";
        } else {
            break;
        }
    }

    // Nested if-else to handle decision logic
    if (choice == 1) {
        cout << "\nYou enter the left room and encounter a fierce dragon!" << endl;
        cout << "The dragon roars and charges at you." << endl;
        cout << "Do you:" << endl;
        cout << "1. Fight the dragon" << endl;
        cout << "2. Try to escape" << endl;
        cout << "Enter your choice: ";
        
        while (true) {
            cin >> choice;

            if (cin.fail() || choice < 1 || choice > 2) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid choice! Please choose 1 or 2: ";
            } else {
                break;
            }
        }

        if (choice == 1) {
            cout << "\nYou bravely fight the dragon... but unfortunately, you are no match for its strength." << endl;
            cout << "You have been defeated. Game over!" << endl;
        } else if (choice == 2) {
            cout << "\nYou try to escape, but the dragon is too fast! It catches you and burns you to ashes." << endl;
            cout << "Game over!" << endl;
        }
    } else if (choice == 2) {
        cout << "\nYou enter the right room and find yourself in a small, dark chamber." << endl;
        cout << "There's a treasure chest in the corner, but it looks suspiciously old." << endl;
        cout << "Do you:" << endl;
        cout << "1. Open the chest" << endl;
        cout << "2. Leave the chest alone and exit the room" << endl;
        cout << "Enter your choice: ";
        
        while (true) {
            cin >> choice;

            if (cin.fail() || choice < 1 || choice > 2) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid choice! Please choose 1 or 2: ";
            } else {
                break;
            }
        }

        if (choice == 1) {
            cout << "\nYou open the chest, and suddenly a cloud of poison gas fills the room!" << endl;
            cout << "You collapse, unable to breathe. Game over!" << endl;
        } else if (choice == 2) {
            cout << "\nYou decide not to risk it and leave the chest alone. You exit the room safely." << endl;
            cout << "Congratulations! You've survived the dungeon!" << endl;
        }
    } else if (choice == 3) {
        cout << "\nYou move forward and find a narrow, dark passage leading further into the dungeon." << endl;
        cout << "Suddenly, a strange noise echoes from behind you!" << endl;
        cout << "Do you:" << endl;
        cout << "1. Turn around and investigate" << endl;
        cout << "2. Keep moving forward" << endl;
        cout << "Enter your choice: ";
        
        while (true) {
            cin >> choice;

            if (cin.fail() || choice < 1 || choice > 2) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid choice! Please choose 1 or 2: ";
            } else {
                break;
            }
        }

        if (choice == 1) {
            cout << "\nYou turn around and see a shadowy figure emerging from the darkness!" << endl;
            cout << "It’s a ghost, and it grabs you with icy hands. Game over!" << endl;
        } else if (choice == 2) {
            cout << "\nYou keep moving forward and find the legendary treasure hidden in a secret room!" << endl;
            cout << "Congratulations! You've completed your adventure and found the treasure!" << endl;
        }
    }
}

// Main function
int main() {
    // Display game introduction
    displayIntroduction();

    // Begin the first choice
    firstChoice();

    return 0;
}