#include <iostream>
#include <string>
#include "TravelPackage.h"

using namespace std;

void displayMenu();

int main() {
    string name, destination;
    double budget;

    // get traveler info from user
    cout << "Welcome to Travel Package System!" << endl;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter destination: ";
    cin >> destination;
    cout << "Enter your budget (numbers only, no $ sign): ";
while (!(cin >> budget)) {
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Invalid input. Please enter a number only: ";
}

    TravelPackage package(name, destination, budget, "trip.txt");

    int choice;
    bool running = true;

    while (running) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            // show traveler info
            package.displayPackage();
        } else if (choice == 2) {
            // TODO: add flight
        } else if (choice == 3) {
            // TODO: add hotel
        } else if (choice == 4) {
            // TODO: add car rental
        } else if (choice == 5) {
            // TODO: save to file
            running = false;
        } else {
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}

void displayMenu() {
    cout << "\n=== Travel Package System ===" << endl;
    cout << "1. View Traveler Info" << endl;
    cout << "2. Add Flight" << endl;
    cout << "3. Add Hotel" << endl;
    cout << "4. Add Car Rental" << endl;
    cout << "5. Quit" << endl;
    cout << "Choice: ";
}