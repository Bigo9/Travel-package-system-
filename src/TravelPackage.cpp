#include "TravelPackage.h"
#include <iostream>

TravelPackage::TravelPackage(std::string name, std::string destination,
                              double budget, std::string file)
    : traveler(name, destination, budget) {
    this->filename = file;
    this->carRental = nullptr;
} 
       void TravelPackage::addFlight(Flight f) {
    void TravelPackage::addFlight(Flight f) {
    flights.push_back(f);   
    std::cout << "Flight added to package!" << std::endl;
}
    std::cout << "[addFlight] not yet implemented" << std::endl;
}
void TravelPackage::addHotel(HotelBooking h) {
    // TODO: implement later
    std::cout << "[addHotel] not yet implemented" << std::endl;
}

void TravelPackage::addCarRental(CarRental c) {
    // TODO: implement later
    std::cout << "[addCarRental] not yet implemented" << std::endl; }
double TravelPackage::getTotalCost() const {
    // TODO: implement later
    return 0;
}
      void TravelPackage::displayPackage() const {
    traveler.displayInfo();
    void TravelPackage::displayPackage() const {
    traveler.displayInfo();

    // show all flights
    if (flights.empty()) {
        std::cout << "No flights added yet." << std::endl;
    } else {
        std::cout << "\n--- Flights ---" << std::endl;
        for (int i = 0; i < flights.size(); i++) {
            flights[i].displayInfo();
        }
    }
}
}
bool TravelPackage::saveToFile() const {
    // TODO: implement later
    return false;
}
        bool TravelPackage::loadFromFile() {
    // TODO: implement later
    return false;
}