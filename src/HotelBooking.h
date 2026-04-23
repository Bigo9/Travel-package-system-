#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H

#include <string>


  //HotelBooking class represents a hotel reservation.
  //Stores hotel name, location, number of nights, and price per night.
 
class HotelBooking {
private:
    std::string hotelName;
    std::string location;
    int nights;
    double pricePerNight;

public:
    // Constructor
    HotelBooking(const std::string& hotelName, const std::string& location,
                 int nights, double pricePerNight);

    // Getters 
    std::string getHotelName() const;
    std::string getLocation() const;
    int getNights() const;
    double getPricePerNight() const;

    // Calculate total cost (nights x pricePerNight)
    double getTotalCost() const;

    // Display hotel info to the screen
    void displayInfo() const;
};

#endif // HOTELBOOKING_H