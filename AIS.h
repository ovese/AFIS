#pragma once
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <string.h>
#include <cstring>
#include <cassert>
#include <ctime>

class AIS
{
public:
	AIS();
	~AIS();
	unsigned int funcMenu();
	void allFlights();
	void allDepartures(std::string);
	void allArrivals(std::string);
	std::string getDepartures();
	std::string getArrivals();
	std::string getDate();

private:
	size_t menu_item;
	std::string ddmmyyyy;
	time_t now;
};

