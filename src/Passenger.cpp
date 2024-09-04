#include "Passenger.h"

// Constructor
Passenger::Passenger(std::string firstName, std::string lastName, std::string seatNumber, std::string flightNumber, std::string classofService) 
    : firstName(firstName), lastName(lastName), seatNumber(seatNumber), flightNumber(flightNumber), classofService(classofService) {}

// Getter for firstName
std::string Passenger::getFirstName() const {
    return firstName;
}

// Setter for firstName
void Passenger::setFirstName(const std::string &firstName) {
    this->firstName = firstName;
}

// Getter for lastName
std::string Passenger::getLastName() const {
    return lastName;
}

// Setter for lastName
void Passenger::setLastName(const std::string &lastName) {
    this->lastName = lastName;
}

// Getter for seatNumber
std::string Passenger::getSeatNumber() const {
    return seatNumber;
}

// Setter for seatNumber
void Passenger::setSeatNumber(const std::string &seatNumber) {
    this->seatNumber = seatNumber;
}

// Getter for flightNumber
std::string Passenger::getFlightNumber() const {
    return flightNumber;
}

// Setter for flightNumber
void Passenger::setFlightNumber(const std::string &flightNumber) {
    this->flightNumber = flightNumber;
}

// Getter for classofService
std::string Passenger::getClassofService() const {
    return classofService;
}

// Setter for classofService
void Passenger::setClassofService(const std::string &classofService) {
    this->classofService = classofService;
}
