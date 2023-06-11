// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author:: James Fehr
// Date:: June 9, 2023
// Class Exercise based on copied from image files code

#include <iostream>
#include "Car.h"
#include "Truck.h"

int main()
{
	Car myCar("Red", 2010, "BMW", "M3");
	Truck myTruck("Black", 2023, "Ford", "F-150");

	std::cout << "\n\n" << "-----Car-----\n" << myCar.getInfo() << std::endl;
	myCar.soundHorn();
	myCar.start();
	myCar.accelerate();
	myCar.decelerate();
	myCar.stop();

	std::cout << "\n\n" << "-----Truck-----\n" << myTruck.getInfo() << std::endl;
	myTruck.soundHorn();
	myTruck.start();
	myTruck.accelerate();
	myTruck.decelerate();
	myTruck.stop();

	std::cout << "\n" << myCar.getInfo() << std::endl;
	std::cout << "\n" << myTruck.getInfo() << std::endl;

}