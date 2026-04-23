#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>


 //Flight class represents a single flight option.
 //Stores airline, departure city, arrival city, and price.

class Flight {
private:
    std::string airline;
    std::string departure;
    std::string arrival;
    double price;

public:
    // Constructor
    Flight(const std::string& airline, const std::string& departure,
           const std::string& arrival, double price);

    // Getters
    std::string getAirline() const;
    std::string getDeparture() const;
    std::string getArrival() const;
    double getPrice() const;

    // show  flight info
    void displayInfo() const;
};

#endif // FLIGHT_H