#include <iostream>
#include <cassert>
#include "../src/Traveler.h"
#include "../src/Flight.h"

// TODO: test traveler initialization
void test_traveler() {
    // Traveler t("Brook", "Paris", 2000);
    // assert(t.getName() == "Brook");
    std::cout << "test_traveler: TODO" << std::endl;
}

// TODO: test flight initialization
void test_flight() {
    // Flight f("Delta", "SF", "NY", 500);
    // assert(f.getAirline() == "Delta");
    std::cout << "test_flight: TODO" << std::endl;
}

int main() {
    std::cout << "Running tests..." << std::endl;

    test_traveler();
    test_flight();

    std::cout << "All tests done." << std::endl;
    return 0;
}