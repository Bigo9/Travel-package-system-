#include "ServiceProvider.h"
#include <iostream>

ServiceProvider::ServiceProvider(std::string name, std::string serviceType, 
                                  std::string location) {
    this->name = name;
    this->serviceType = serviceType;
    this->location = location;
    this->rating = 0.0;
    this->isAvailable = true;
}

std::string ServiceProvider::getName() const {
    return name;
}

std::string ServiceProvider::getServiceType() const {
    return serviceType;
}

std::string ServiceProvider::getLocation() const {
    return location;
}

double ServiceProvider::getRating() const {
    return rating;
}

bool ServiceProvider::getIsAvailable() const {
    return isAvailable;
}

void ServiceProvider::setRating(double r) {
    this->rating = r;
}

void ServiceProvider::setAvailable(bool available) {
    this->isAvailable = available;
}

void ServiceProvider::displayInfo() const {
    std::cout << "Provider: " << name << std::endl;
    std::cout << "Service: " << serviceType << std::endl;
    std::cout << "Location: ";
}