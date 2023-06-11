// Author:: James Fehr
// Date:: June 9, 2023#pragma once
#include "Vehicle.h"
class Car : public Vehicle {
public:
	Car(std::string color, int year, std::string make, std::string model);
	void soundHorn();
	void start();
	void stop();
	void accelerate();
	void decelerate();
};

