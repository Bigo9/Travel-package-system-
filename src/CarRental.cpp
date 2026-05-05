#include "CarRental.h"
#include <iostream>    
  
         CarRental::CarRental(std::string type, std::string company, int days, double price) {
    this->carType = type;
    this->company = company;
    this->days = days;
    this->pricePerDay = price;  }

std::string CarRental::getCarType() const {
    return "";
}
    std::string CarRental::getCompany() const {
    // TODO: implement later
    return "";
}     
int CarRental::getDays() const {
    return 0;
}
double CarRental::getPricePerDay() const {
    return 0;
}
double CarRental::getTotalCost() const {
    // TODO: implement later
    return 0;
}
void CarRental::displayInfo() const {
   
    std::cout << "[CarRental::displayInfo] not yet implemented" << std::endl;
}