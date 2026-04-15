#ifndef TRAVELER_H
#define TRAVELER_H

#include <string>
using namespace std;

class Traveler {
private:
    string name;
    string destination;
    double budget;

public:

    Traveler(string name, string destination, double budget);

    string getName();
    string getDestination();
    double getBudget();

    void displayInfo();
};

#endif