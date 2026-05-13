#ifndef TRAVELPREFERENCE_H
#define TRAVELPREFERENCE_H

#include <string>

// this class stores what the traveler wants
// their budget level and type of tourism they like

class TravelPreference {
private:
    std::string budgetLevel;  // low, medium, luxury
    std::string tourismType;  // cultural, adventure, leisure, etc
    int travelDays;

public:
    TravelPreference(std::string budget, std::string tourism, int days);

    std::string getBudgetLevel() const;
    std::string getTourismType() const;
    int getTravelDays() const;

    void displayPreference() const;
};

#endif