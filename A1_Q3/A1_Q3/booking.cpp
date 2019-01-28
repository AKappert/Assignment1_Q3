#include "pch.h"
#include <iostream>
#include "booking.h"
#include "passenger.h"
#include "flight.h"
#include "date.h"
#include "time.h"
#include <string>

using namespace std;

Booking::Booking()
{
}

Booking::Booking(int bn, Passenger p, Flight f, string sn)
{
	bookingNum = bn;
	passenger = p;
	flight = f;
	seatNum = sn;
}

void Booking::setBooking(int bn, Passenger p, Flight f, string sn)
{
	bookingNum = bn;
	passenger = p;
	flight = f;
	seatNum = sn;
}

void Booking::setBookingNumber(int bn)
{
	bookingNum = bn;
}

void Booking::setPassenger(Passenger p)
{
	passenger = p;
}

void Booking::setFlight(Flight f)
{
	flight = f;
}

void Booking::setSeatNumber(string sn)
{
	seatNum = sn;
}

int Booking::getBookingNumber()
{
	return bookingNum;
}

Passenger Booking::getPassenger()
{
	return passenger;
}

Flight Booking::getFlight()
{
	return flight;
}

string Booking::getSeatNumber()
{
	return seatNum;
}

void Booking::printBookingInfo()
{
	cout << "----------Booking Number----------\n";
	cout << bookingNum << endl;
	cout << "\n----------Passenger Info----------\n";
	passenger.printPassengerInfo();
	cout << "\n\n----------Flight Info-------------\n";
	flight.printFlight();
	cout << "\n\n----------Seat Number-------------\n";
	cout << seatNum << endl;
}


Booking::~Booking()
{
}
