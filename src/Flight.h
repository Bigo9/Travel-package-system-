#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>

// this class stores flight info

class Flight {
private:
    std::string airline;
    std::string departure;
    std::string arrival;
    double price;

public:
    Flight(std::string airline, std::string departure, std::string arrival, double price);

    std::string getAirline() const;
    std::string getDeparture() const;
    std::string getArrival() const;
    double getPrice() const;

    void displayInfo() const;
};

#endif