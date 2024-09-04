


#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
private:
    std::string firstName;
    std::string lastName;
    std::string seatNumber;
    std::string flightNumber;
    std::string classofService;

public:
    // Constructor
    Passenger(std::string firstName, std::string lastName, std::string seatNumber, std::string flightNumber, std::string classofService);

    // Getter and Setter for firstName
    std::string getFirstName() const;
    void setFirstName(const std::string &firstName);
    
    // Getter and Setter for lastName
    std::string getLastName() const;
    void setLastName(const std::string &lastName);

    // Getter and Setter for seatNumber
    std::string getSeatNumber() const;
    void setSeatNumber(const std::string &seatNumber);

    // Getter and Setter for flightNumber
    std::string getFlightNumber() const;
    void setFlightNumber(const std::string &flightNumber);

    // Getter and Setter for classofService
    std::string getClassofService() const;
    void setClassofService(const std::string &classofService);
};

#endif
