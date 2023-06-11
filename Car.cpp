// Author:: James Fehr
// Date:: June 9, 2023
#include "Car.h"
#include <iostream>
Car::Car(std::string color, int year, std::string make, std::string model): Vehicle(color, year, make, model) {}

void Car::soundHorn()
{
	std::cout << "Car horn" << std::endl;
}

void Car::start()
{
	std::cout << "Car started" << std::endl;
}

void Car::stop()
{
	std::cout << "Car stopped" << std::endl;
}

void Car::accelerate()
{
	std::cout << "Car is accelerating: ";
	for (size_t i = 0; i < 10; i++) {
		std::cout << (speed += 10) << " k/h, ";
	}
	std::cout << "Acceleration complete\n";
}

void Car::decelerate()
{
	std::cout << "Car is decelerating: ";
	for (size_t i = 0; i < 10; i++) {
		std::cout << (speed -= 10) << " k/h, ";
	}
	std::cout << "Deceleration Complete";
}
