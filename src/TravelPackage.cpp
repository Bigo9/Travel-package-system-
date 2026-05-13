#include "TravelPackage.h"
#include <iostream>

TravelPackage::TravelPackage(std::string name, std::string destination,
                              double budget, std::string file)
    : traveler(name, destination, budget) {
    this->filename = file;
    this->carRental = nullptr;
}

void TravelPackage::addFlight(Flight f) {
    flights.push_back(f);
    std::cout << "Flight added!" << std::endl;
}

void TravelPackage::addHotel(HotelBooking h) {
    hotels.push_back(h);
    std::cout << "Hotel added!" << std::endl;
}

void TravelPackage::addCarRental(CarRental c) {
    carRental = new CarRental(c);
    std::cout << "Car rental added!" << std::endl;
}

double TravelPackage::getTotalCost() const {
    double total = 0;

    for (int i = 0; i < flights.size(); i++) {
        total += flights[i].getPrice();
    }

    for (int i = 0; i < hotels.size(); i++) {
        total += hotels[i].getTotalCost();
    }

    if (carRental != nullptr) {
        total += carRental->getTotalCost();
    }

    return total;
}

void TravelPackage::displayPackage() const {
    traveler.displayInfo();
    std::cout << "\n-- Flights --" << std::endl;
    for (int i = 0; i < flights.size(); i++) {
        flights[i].displayInfo();
    }
    std::cout << "\n-- Hotels --" << std::endl;
    for (int i = 0; i < hotels.size(); i++) {
        hotels[i].displayInfo();
    }
    if (carRental != nullptr) {
        std::cout << "\n-- Car Rental --" << std::endl;
        carRental->displayInfo();
    }
    std::cout << "\nTotal Cost: $" << getTotalCost() << std::endl;
}

bool TravelPackage::saveToFile() const {
    // TODO: implement later
    return false;
}

bool TravelPackage::loadFromFile() {
    // TODO: implement later
    return false;
}