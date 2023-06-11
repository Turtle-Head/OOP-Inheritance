// Author:: James Fehr
// Date:: June 9, 2023
#include "Truck.h"
#include <iostream>

Truck::Truck(std::string color, int year, std::string make, std::string model)
: Vehicle(color, year, make, model){}


	void Truck::soundHorn()
	{
		std::cout << "Truck horn" << std::endl;
	}

	void Truck::start()
	{
		std::cout << "Truck started" << std::endl;
	}

	void Truck::stop()
	{
		std::cout << "Truck stopped" << std::endl;
	}

	void Truck::accelerate()
	{
		std::cout << "Truck is accelerating: ";
		for (size_t i = 0; i < 10; i++) {
			std::cout << (speed += 10) << " k/h, ";
		}
		std::cout << "Acceleration complete\n";
	}

	void Truck::decelerate()
	{
		std::cout << "Truck is decelerating: ";
		for (size_t i = 0; i < 10; i++) {
			std::cout << (speed -= 10) << " k/h, ";
		}
		std::cout << "Deceleration Complete";
	}


