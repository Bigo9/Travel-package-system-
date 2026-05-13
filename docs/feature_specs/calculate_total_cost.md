# Calculate Total Cost — Spec

## Problem statement
A traveler can add flights, hotels, and car rentals to their package
and see the total cost of everything combined in one place.

## Types involved
- Flight (getPrice)
- HotelBooking (getTotalCost)
- CarRental (getTotalCost)
- TravelPackage (stores all three, calculates total)

## Public interface
- double TravelPackage::getTotalCost() const
- void TravelPackage::addFlight(Flight f)
- void TravelPackage::addHotel(HotelBooking h)
- void TravelPackage::addCarRental(CarRental c)

## Inputs and outputs
- Input: flight price, hotel nights and price, car days and price
- Output: total cost printed to screen

## Edge cases
- No flights, hotels, or car rentals added (total should be 0)
- Multiple flights added
- Price is 0
- Very large numbers

## Three tests
- Normal: add one flight, one hotel, one car — total is correct
- Edge: nothing added, total should be 0
- Boundary: add multiple flights, total adds them all up