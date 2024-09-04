#include <iostream>
#include "Passenger.h"

int main() {
    // Create a Passenger object
    Passenger passenger("Jason", "Ma", "5E", "UA124", "FirstClass");

    // Display initial passenger details
    std::cout << "Passenger Details:" << std::endl;
    std::cout << "First Name: " << passenger.getFirstName() << std::endl;
    std::cout << "Last Name: " << passenger.getLastName() << std::endl;
    std::cout << "Seat Number: " << passenger.getSeatNumber() << std::endl;
    std::cout << "Flight Number: " << passenger.getFlightNumber() << std::endl;
    std::cout << "Class of Service: " << passenger.getClassofService() << std::endl;

    // Update some details
    passenger.setFlightNumber("UA536");
    passenger.setSeatNumber("60C");
    passenger.setClassofService("Economy");

    // Display updated passenger details
    std::cout << "\nUpdated Passenger Details:" << std::endl;
    std::cout << "First Name: " << passenger.getFirstName() << std::endl;
    std::cout << "Last Name: " << passenger.getLastName() << std::endl;
    std::cout << "Seat Number: " << passenger.getSeatNumber() << std::endl;
    std::cout << "Flight Number: " << passenger.getFlightNumber() << std::endl;
    std::cout << "Class of Service: " << passenger.getClassofService() << std::endl;

    return 0;
}
