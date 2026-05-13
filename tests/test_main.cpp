#include <iostream>
#include <cassert>
#include "../src/Traveler.h"
#include "../src/Flight.h"
#include "../src/HotelBooking.h"
#include "../src/CarRental.h"
#include "../src/TravelPackage.h"

// Test 1 - normal: add flight and hotel, check total cost
void test_total_cost_normal() {
    std::cout << "Test 1 - Normal total cost... ";
    TravelPackage package("Brook", "Rome", 3000, "trip.txt");
    Flight f("Delta", "SF", "Rome", 800);
    HotelBooking h("Hotel Roma", "Rome", 3, 100);
    package.addFlight(f);
    package.addHotel(h);
    assert(package.getTotalCost() == 1100);
    std::cout << "PASSED" << std::endl;
}

// Test 2 - edge: nothing added, total should be 0
void test_total_cost_empty() {
    std::cout << "Test 2 - Empty package cost... ";
    TravelPackage package("Brook", "Rome", 3000, "trip.txt");
    assert(package.getTotalCost() == 0);
    std::cout << "PASSED" << std::endl;
}

// Test 3 - boundary: add multiple flights, total adds them all
void test_total_cost_multiple_flights() {
    std::cout << "Test 3 - Multiple flights... ";
    TravelPackage package("Brook", "Rome", 3000, "trip.txt");
    Flight f1("Delta", "SF", "Rome", 800);
    Flight f2("United", "Rome", "Paris", 200);
    package.addFlight(f1);
    package.addFlight(f2);
    assert(package.getTotalCost() == 1000);
    std::cout << "PASSED" << std::endl;
}

int main() {
    std::cout << "Running tests..." << std::endl;
    test_total_cost_normal();
    test_total_cost_empty();
    test_total_cost_multiple_flights();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}