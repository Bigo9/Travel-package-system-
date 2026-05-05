#include "HotelBooking.h"
#include <iostream>

HotelBooking::HotelBooking(std::string name, std::string loc, int n, double price) {
    this->hotelName = name;
    this->location = loc;
    this->nights = n;
    this->pricePerNight = price;   }

std::string HotelBooking::getHotelName() const {
return "";
}
std::string HotelBooking::getLocation() const {
    
          return "";
}
int HotelBooking::getNights() const {
              return 0;
}

   double HotelBooking::getPricePerNight() const {

    return 0;
}    
double HotelBooking::getTotalCost() const {
    
    return 0;
}
   void HotelBooking::displayInfo() const {
    
    std::cout << "[HotelBooking::displayInfo] not yet implemented" << std::endl;
}