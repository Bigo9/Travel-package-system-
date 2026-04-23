#ifndef CARRENTAL_H
#define CARRENTAL_H

#include <string>

// this class stores car rental info for the trip

class CarRental {
private:
 std::string carType;
    std::string company;
    int days;
    double pricePerDay;

public:
    CarRental(std::string type, std::string company, int days, double price);

std::string getCarType() const;
    std::string getCompany() const;
    int getDays() const;
    double getPricePerDay() const;
    double getTotalCost() const;

    void displayInfo() const;
};

#endif