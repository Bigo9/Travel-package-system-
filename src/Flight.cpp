#include "Flight.h"
#include <iostream>


Flight::Flight(std::string airline, std::string departure, std::string arrival, double price) {
    this->airline = airline;
    this->departure = departure;
    this->arrival = arrival;
    this->price = price; }

std::string Flight::getAirline() const {
   
    return ""; }

std::string Flight::getDeparture() const {
   
    return ""; }

std::string Flight::getArrival() const {
  
    return "";
}

double Flight::getPrice() const {

    return 0;
}
void Flight::displayInfo() const {

    std::cout << "[Flight::displayInfo] not yet implemented" << std::endl;
}