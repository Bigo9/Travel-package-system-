#ifndef TRAVELER_H
#define TRAVELER_H

#include <string>


 // Traveler class represents a person planning a trip.
 // It stores their name, destination, and bugget. 



class Traveler {
private:
    std::string name;
    std::string destination;
    double budget;

public:

//Constructors

    Traveler(const std::string&name, std::string destination, double budget);

    std::string getName() const;
    std::string getDestination() const;
    double getBudget();

    void displayInfo() const;
};

#endif