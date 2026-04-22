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
    string name;
    string destination;
    double budget;

public:

//Constructors

    Traveler(string name, string destination, double budget);

    string getName();
    string getDestination();
    double getBudget();

    void displayInfo();
};

#endif