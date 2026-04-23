#include <iostream>
#include <string>
#include "TravelPackage.h"

using namespace std;

void displayMenu();

int main() {
    // TODO: get traveler info from user
    // TODO: create Traveler object
    // TODO: load existing package from file

    int choice;
    bool running = true;

    while (running) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            // TODO: get flight info from user
            // TODO: add flight to package
        } else if (choice == 2) {
            // TODO: get hotel info from user
            // TODO: add hotel to package
        } else if (choice == 3) {
            // TODO: get car rental info from user
            // TODO: add car rental to package
        } else if (choice == 4) {
            // TODO: display full package and total cost
        } else if (choice == 5) {
            // TODO: save package to file
            running = false;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}

void displayMenu() {
    cout << "\n=== Travel Package System ===" << endl;
    cout << "1. Add Flight" << endl;
    cout << "2. Add Hotel" << endl;
    cout << "3. Add Car Rental" << endl;
    cout << "4. View Package" << endl;
    cout << "5. Save and Quit" << endl;
    cout << "Choice: ";
}