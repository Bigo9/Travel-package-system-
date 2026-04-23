# Implementation Plan

## Feature 1: Add Flight
**Trigger**: User selects "Add Flight" from main menu
Asks the user for airline name, departure city, arrival city, and price.
Creates a Flight object and adds it to the TravelPackage.
Displays a confirmation message when done.

## Feature 2: Add Hotel
**Trigger**: User selects "Add Hotel" from main menu
Asks the user for hotel name, location, number of nights, and price per night.
Creates a HotelBooking object and adds it to the TravelPackage.
Calculates and shows the total hotel cost.

## Feature 3: Add Car Rental
**Trigger**: User selects "Add Car Rental" from main menu
Asks the user for car type, company, number of days, and price per day.
Creates a CarRental object and adds it to the TravelPackage.
Shows the total car rental cost.

## Feature 4: View Package
**Trigger**: User selects "View Package" from main menu
Displays all the trip info including traveler name, flights, hotels, and car rental.
Calculates and shows the total cost of the whole trip.

## Feature 5: Save Trip to File
**Trigger**: User selects "Save and Quit"
Writes all the trip information to a text file.
So the traveler can keep a record of their booking.