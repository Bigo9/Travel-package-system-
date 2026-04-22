#ifndef TRAVELER_H
#define TRAVELER_H

#include <string>

/*
 * Traveler class represents a person planning a trip.
 * It stores their name, destination, and bugget. 
 */
using namespace std;

class Traveler {
private:
    std::string name;
    std::string destination;
    std::double budget;

public:

//Constructors

    Traveler(const std::string&name, std::string destination, double budget);

    std::string getName();
    std::string getDestination();
    std::double getBudget();

    void displayInfo() const;
};

#endif