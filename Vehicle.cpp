// Author:: James Fehr
// Date:: June 9, 2023
#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string color, int year, std::string make, std::string model)
	: color(color), year(year), make(make), model(model) {
	speed = 0;
}

void Vehicle::soundHorn()
{
	std::cout << "Vehicle horn" << std::endl;
}

void Vehicle::start()
{
	std::cout << "Vehicle started" << std::endl;
}

void Vehicle::stop()
{
	std::cout << "Vehicle stopped" << std::endl;
}

void Vehicle::accelerate()
{
	std::cout << "Vehicle is accelerating" << std::endl;
}

void Vehicle::decelerate()
{
	std::cout << "Vehicle is decelerating" << std::endl;
}

std::string Vehicle::getInfo()
{
	return "Make: " + make + ", Model: " + model + ", Color: " + color + ", Year: " + std::to_string(year);
}
