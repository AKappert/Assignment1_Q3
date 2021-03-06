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
	Booking booking;														//variables
	int booknum;															//variables
	Passenger passenger;													//variables
	Flight testflight;														//variables
	string seat;															//variables

	booknum = 12345;																																				  //initializing with some data
	passenger.setPassengerID(40063638);																																  //initializing with some data
	passenger.setPassengerName("Andrew Kappert");																													  //initializing with some data
	passenger.setPassengerAddress("100 Something St.");																												  //initializing with some data
	passenger.setPassengerPhone("(514) 111-2222");																													  //initializing with some data
	passenger.setPassengerDOB(Date(24, 11, 1997));																													  //initializing with some data
	testflight.setFlight("MTL-AUS_123", Time(20, 30, 00), Date(31, 01, 2019), Time(06, 15, 00), Date(01, 02, 2019), "Montreal, Canada", "Sydney, Australia");		  //initializing with some data
	seat = "A01";

	



	booking.setBooking(booknum, passenger, testflight, seat);												 //seting booking object with info
	booking.printBookingInfo();																				//printing booking info


	system("pause");
	return 0;
}
