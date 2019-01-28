#pragma once

#include "passenger.h"
#include "flight.h"
#include "date.h"
#include "time.h"

using namespace std;

class Booking
{
public:
	Booking();
	Booking(int, Passenger, Flight, string);
	void setBooking(int, Passenger, Flight, string);
	void setBookingNumber(int);
	void setPassenger(Passenger);
	void setFlight(Flight);
	void setSeatNumber(string);

	int getBookingNumber();
	Passenger getPassenger();
	Flight getFlight();
	string getSeatNumber();

	void printBookingInfo();


	~Booking();


private:
	int bookingNum;
	Passenger passenger;
	Flight flight;
	string seatNum;

};

