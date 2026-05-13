#include "CarRental.h"
#include <iostream>    
  
         CarRental::CarRental(std::string type, std::string company, int days, double price) {
    this->carType = type;
    this->company = company;
    this->days = days;
    this->pricePerDay = price;  }

std::string CarRental::getCarType() const {
    return carType;
}

std::string CarRental::getCompany() const {
    return company;
}

int CarRental::getDays() const {
    return days;
}

double CarRental::getPricePerDay() const {
    return pricePerDay;
}

double CarRental::getTotalCost() const {
    return days * pricePerDay;
}

void CarRental::displayInfo() const {
    std::cout << "Car Type: " << carType << std::endl;
    std::cout << "Company: " << company << std::endl;
    std::cout << "Days: " << days << std::endl;
    std::cout << "Price per day: $" << pricePerDay << std::endl;
    std::cout << "Total: $" << getTotalCost() << std::endl;
}