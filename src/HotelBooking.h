#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H

#include <string>

// this class stores hotel booking info

class HotelBooking {
private:
    std::string hotelName;
    std::string location;
    int nights;
    double pricePerNight;

public:
    HotelBooking(std::string name, std::string loc, int n, double price);

    std::string getHotelName() const;
    std::string getLocation() const;
    int getNights() const;
    double getPricePerNight() const;
    double getTotalCost() const;

    void displayInfo() const;
};

#endif