cmake_minimum_required(VERSION 3.10)
project(TravelPackage)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

enable_testing()

 add_library(travel_lib
     src/Traveler.cpp
     src/Flight.cpp
    src/HotelBooking.cpp
    src/CarRental.cpp
     src/TravelPackage.cpp
 )

add_executable(travel_package src/main.cpp)
target_link_libraries(travel_package travel_lib)

 add_executable(tests tests/test_main.cpp)
 target_link_libraries(tests travel_lib)

 add_test(NAME TravelTests COMMAND tests)