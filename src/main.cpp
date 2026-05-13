#include <iostream>
#include <string>
#include "TravelPackage.h"
#include "TravelPreference.h"

using namespace std;

void displayMenu();

int main() {
    string name, destination, budget, tourism;
    int days;
    double moneyBudget;

    cout << "Welcome to Travel Package System!" << endl;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter destination: ";
    cin >> destination;

    cout << "\nWhat is your budget level? (low/medium/luxury): ";
    cin >> budget;
    cin.ignore();
    

    cout << "Enter your total budget in dollars (example: 2000): $";
    cin >> moneyBudget;
    cin.ignore();

    cout << "How many days will you stay? (enter a number, example: 5): ";
    cin >> days;

    cout << "\nWhat type of tourism?" << endl;
    cout << "1. Cultural  2. Adventure  3. Leisure" << endl;
    cout << "4. Business  5. Food  6. Nightlife" << endl;
    cout << "Choose (1-6): ";
    int tourChoice;
    cin >> tourChoice;

    if (tourChoice == 1) tourism = "Cultural";
    else if (tourChoice == 2) tourism = "Adventure";
    else if (tourChoice == 3) tourism = "Leisure";
    else if (tourChoice == 4) tourism = "Business";
    else if (tourChoice == 5) tourism = "Food";
    else tourism = "Nightlife";

    // create objects
    TravelPackage package(name, destination, moneyBudget, "trip.txt");
    TravelPreference preference(budget, tourism, days);

    int choice;
    bool running = true;

    while (running) {
        displayMenu();
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a number!" << endl;
            continue;
        }

        if (choice == 1) {
            package.displayPackage();
            preference.displayPreference();
        } else if (choice == 2) {
            } else if (choice == 2) {
    string airline, departure, arrival;
    double price;

    cout << "Enter airline name: ";
    cin >> airline;
    cout << "Enter departure city: ";
    cin >> departure;
    cout << "Enter arrival city: ";
    cin >> arrival;
    cout << "Enter flight price: $";
    cin >> price;

    Flight f(airline, departure, arrival, price);
    package.addFlight(f);
}
        } else if (choice == 3) {
            // TODO: add hotel
        } else if (choice == 4) {
            // TODO: add car rental
        } else if (choice == 5) {
            cout << "Goodbye!" << endl;
            running = false;
        } else {
            cout << "Invalid choice. Please enter 1-5." << endl;
        }
    }

    return 0;
}

void displayMenu() {
    cout << "\n=== Travel Package System ===" << endl;
    cout << "1. View My Trip Info" << endl;
    cout << "2. Add Flight" << endl;
    cout << "3. Add Hotel" << endl;
    cout << "4. Add Car Rental" << endl;
    cout << "5. Quit" << endl;
    cout << "Choice: ";
}