#ifndef TRAVELER_H
#define TRAVELER_H

#include <string>

// this class stores traveler info

class Traveler {
private:
    std::string name;
    std::string destination;
    double budget;

public:
    Traveler(std::string name, std::string destination, double budget);

    std::string getName() const;
    std::string getDestination() const;
    double getBudget() const;

    void displayInfo() const;
};

#endif