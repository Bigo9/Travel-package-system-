#include "Flight.h"
#include <iostream>


Flight::Flight(std::string airline, std::string departure, std::string arrival, double price) {
    this->airline = airline;
    this->departure = departure;
    this->arrival = arrival;
    this->price = price; }

std::string Flight::getAirline() const {
    return airline;
}

std::string Flight::getDeparture() const {
    return departure;
}

std::string Flight::getArrival() const {
    return arrival;
}

void Flight::displayInfo() const {
    std::cout << "Airline: " << airline << std::endl;
    std::cout << "From: " << departure << std::endl;
    std::cout << "To: " << arrival << std::endl;
    std::cout << "Price: $" << price << std::endl;
}

double Flight::getPrice() const {
    return price;
}

