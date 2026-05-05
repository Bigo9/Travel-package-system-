#ifndef TRAVELPACKAGE_H
#define TRAVELPACKAGE_H

#include <string>
#include <vector>
#include "Traveler.h"
#include "Flight.h"
#include "HotelBooking.h"
#include "CarRental.h"

// this is the main manager class
// it holds all the travel info together

class TravelPackage {
private:
    Traveler traveler;
    std::vector<Flight> flights;
    std::vector<HotelBooking> hotels;
    CarRental* carRental;
    std::string filename;

public:
    TravelPackage(std::string name, std::string destination, 
                  double budget, std::string file);

    void addFlight(Flight f);
    void addHotel(HotelBooking h);
    void addCarRental(CarRental c);

    double getTotalCost() const;
    void displayPackage() const;

    bool saveToFile() const;
    bool loadFromFile();
};

#endif
