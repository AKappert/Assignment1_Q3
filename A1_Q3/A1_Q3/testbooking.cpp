//Andrew KAppert (40063638)
//August Marco Eine ()


#include "pch.h"
#include <iostream>
#include "booking.h"
#include "passenger.h"
#include "flight.h"
#include "date.h"
#include "time.h"
#include <string>


using namespace	std;

int main()
{
	Booking booking;
	int booknum;
	Passenger passenger;
	Flight testflight;
	string seat;

	booknum = 12345;
	passenger.setPassengerID(40063638);
	passenger.setPassengerName("Andrew Kappert");
	passenger.setPassengerAddress("100 Something St.");
	passenger.setPassengerPhone("(514) 111-2222");
	passenger.setPassengerDOB(Date(24, 11, 1997));
	testflight.setFlight("MTL-AUS_123", Time(20, 30, 00), Date(31, 01, 2019), Time(06, 15, 00), Date(01, 02, 2019), "Montreal, Canada", "Sydney, Australia");
	seat = "A01";

	



	booking.setBooking(booknum, passenger, testflight, seat);
	booking.printBookingInfo();


	system("pause");
	return 0;
}
