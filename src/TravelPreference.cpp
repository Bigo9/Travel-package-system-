#include "TravelPreference.h"
#include <iostream>

TravelPreference::TravelPreference(std::string budget, std::string tourism, int days) {
    this->budgetLevel = budget;
    this->tourismType = tourism;
    this->travelDays = days;
}

std::string TravelPreference::getBudgetLevel() const {
    return budgetLevel;
}

std::string TravelPreference::getTourismType() const {
    return tourismType;
}

int TravelPreference::getTravelDays() const {
    return travelDays;
}

void TravelPreference::displayPreference() const {
    std::cout << "Budget Level: " << budgetLevel << std::endl;
    std::cout << "Tourism Type: " << tourismType << std::endl;
    std::cout << "Travel Days: " << travelDays << std::endl;
}