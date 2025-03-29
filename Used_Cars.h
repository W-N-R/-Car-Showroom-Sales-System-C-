#pragma once
#ifndef USED_CARS_H
#define USED_CARS_H

#include <iostream>
#include <string>
#include "Cars.h"
using namespace std;




/////////////////////////////////USED CAR CLASS////////////////////////////////////////


class UsedCar : public Cars {
	string registrationNumber;
public:
	UsedCar() {}
	UsedCar(string, int, double, double, string, string, string);
	void display()  {  // polymorphism ka concept use kia ha 
		Cars::display();       //(base class kay fuction main bas addition ho gay gii)
		cout << "Registration: " << registrationNumber << endl;
	}

};

UsedCar::UsedCar(string model, int manufactureYear, double price, double engineSize, string transmission, string chassisNumber, string registrationNumber) {
	this->model = model;
	this->manufactureYear = manufactureYear;
	this->price = price;
	this->engineSize = engineSize;
	this->transmission = transmission;
	this->chassisNumber = chassisNumber;
	this->registrationNumber = registrationNumber;
}


#endif