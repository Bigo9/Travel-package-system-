#include "HotelBooking.h"
#include <iostream>

HotelBooking::HotelBooking(std::string name, std::string loc, int n, double price) {
    this->hotelName = name;
    this->location = loc;
    this->nights = n;
    this->pricePerNight = price;   }

std::string HotelBooking::getHotelName() const {
    return hotelName;
}

std::string HotelBooking::getLocation() const {
    return location;
}

int HotelBooking::getNights() const {
    return nights;
}

double HotelBooking::getPricePerNight() const {
    return pricePerNight;
}

double HotelBooking::getTotalCost() const {
    return nights * pricePerNight;
}

void HotelBooking::displayInfo() const {
    std::cout << "Hotel: " << hotelName << std::endl;
    std::cout << "Location: " << location << std::endl;
    std::cout << "Nights: " << nights << std::endl;
    std::cout << "Price per night: $" << pricePerNight << std::endl;
    std::cout << "Total: $" << getTotalCost() << std::endl;
}