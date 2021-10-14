#include "AIS.h"

AIS::AIS() {
	std::cout << "***** in Ctor*********" << std::endl;
	std::cout << "Define params here" << std::endl;
	menu_item = 0;
	ddmmyyyy = " ";
	now = NULL;

	std::cout << "\n\n";
}

AIS::~AIS() {
	std::cout << "*****Clean up in dtor*****" << std::endl;

	std::cout << "\n\n";
}

std::string AIS::getDate() {
	std::cout << "retrieving todays Date: " << std::endl;
	now = time(nullptr);
	ddmmyyyy=ctime(&now);

	return ddmmyyyy;
}

void AIS::allFlights() {
	std::string t_date;
	std::string todays_date = getDate().substr(0, 10);
	std::cout << "Enter DOI using format: " << todays_date << "\n";
	std::cin >> t_date;
	if ((t_date.compare(todays_date))==0) {
		std::cout << "Retrieving flight records for: " << t_date << "\n";
	}
	else {
		assert((t_date.compare(todays_date))!=0);
	}
	std::cout << "\n\n";
}

unsigned int AIS::funcMenu() {
	std::cout << "Select a menu item from the list:" << "\n";
	std::cout << "1..........View all Flights" << "\n";
	std::cout << "2..........View all Departures" << "\n";
	std::cout << "3..........View all Arrivals" << "\n";

	std::cin >> menu_item;

	switch (menu_item)
	{
	case 1:
		allFlights();
		break;
	default:
		break;
	}

	std::cout << "\n\n";
	return menu_item;
}
