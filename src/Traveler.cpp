#include "Traveler.h"
#include <iostream>

Traveler::Traveler(std::string name, std::string destination, double budget) {
    this->name = name;
    this->destination = destination;
    this->budget = budget; }

std::string Traveler::getName() const {
    return name;
}

std::string Traveler::getDestination() const {
    return destination;}

double Traveler::getBudget() const {
    return budget;
}

void Traveler::displayInfo() const {
    std::cout << "Traveler: " << name << std::endl;
    std::cout << "Destination: " << destination << std::endl;
    std::cout << "Budget: $" << budget << std::endl;
}