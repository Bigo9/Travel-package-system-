#include <iostream>
#include <string>
#include "TravelPackage.h"
#include "TravelPreference.h"

using namespace std;

void displayMenu();

int main() {
    string name, destination, budgetLevel, tourism;
    double moneyBudget;
    int days, tourChoice;

    cout << "Welcome to Travel Package System!" << endl;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter destination: ";
    cin >> destination;
    cout << "Enter your total budget in dollars: $";
    cin >> moneyBudget;
    cin.ignore();
    cout << "Budget level (low/medium/luxury): ";
    cin >> budgetLevel;
    cin.ignore();
    cout << "How many days will you stay?: ";
    cin >> days;
    cin.ignore();

    cout << "\nWhat type of tourism?" << endl;
    cout << "1. Cultural  2. Adventure  3. Leisure" << endl;
    cout << "4. Business  5. Food  6. Nightlife" << endl;
    cout << "Choose (1-6): ";
    cin >> tourChoice;
    cin.ignore();

    if (tourChoice == 1) tourism = "Cultural";
    else if (tourChoice == 2) tourism = "Adventure";
    else if (tourChoice == 3) tourism = "Leisure";
    else if (tourChoice == 4) tourism = "Business";
    else if (tourChoice == 5) tourism = "Food";
    else tourism = "Nightlife";

    TravelPackage package(name, destination, moneyBudget, "trip.txt");
    TravelPreference preference(budgetLevel, tourism, days);

    int choice;
    bool running = true;

    while (running) {
        displayMenu();
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            package.displayPackage();
            preference.displayPreference();

        } else if (choice == 2) {
            string airline, departure, arrival;
            double price;
            cout << "Enter airline name: ";
            getline(cin, airline);
            cout << "Enter departure city: ";
            getline(cin, departure);
            cout << "Enter arrival city: ";
            getline(cin, arrival);
            cout << "Enter flight price: $";
            cin >> price;
            cin.ignore();
            Flight f(airline, departure, arrival, price);
            package.addFlight(f);

        } else if (choice == 3) {
            string hotelName, location;
            int nights;
            double pricePerNight;
            cout << "Enter hotel name: ";
            getline(cin, hotelName);
            cout << "Enter location: ";
            getline(cin, location);
            cout << "Enter number of nights: ";
            cin >> nights;
            cout << "Enter price per night: $";
            cin >> pricePerNight;
            cin.ignore();
            HotelBooking h(hotelName, location, nights, pricePerNight);
            package.addHotel(h);

        } else if (choice == 4) {
            string carType, company;
            int carDays;
            double pricePerDay;
            cout << "Enter car type: ";
            getline(cin, carType);
            cout << "Enter company: ";
            getline(cin, company);
            cout << "Enter number of days: ";
            cin >> carDays;
            cout << "Enter price per day: $";
            cin >> pricePerDay;
            cin.ignore();
            CarRental c(carType, company, carDays, pricePerDay);
            package.addCarRental(c);

        } else if (choice == 5) {
            cout << "Goodbye!" << endl;
            running = false;
        } else {
            cout << "Invalid choice." << endl;
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