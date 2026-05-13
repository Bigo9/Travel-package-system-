#ifndef SERVICEPROVIDER_H
#define SERVICEPROVIDER_H

#include <string>

// this class represents a service provider
// like a tour guide, driver, or restaurant

class ServiceProvider {
private:
    std::string name;
    std::string serviceType;
    std::string location;
    double rating;
    bool isAvailable;

public:
    ServiceProvider(std::string name, std::string serviceType, 
                    std::string location);

    std::string getName() const;
    std::string getServiceType() const;
    std::string getLocation() const;
    double getRating() const;
    bool getIsAvailable() const;

    void setRating(double r);
    void setAvailable(bool available);

    void displayInfo() const;
};

#endif