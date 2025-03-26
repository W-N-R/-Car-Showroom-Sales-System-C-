#pragma once
#ifndef IMPORTED_CARS_H
#define IPORTED_CARS__H

#include "Cars.h"
#include <iostream>
#include <string>
using namespace std;


/////////////////////////////////IMPORTED CAR CLASS////////////////////////////////////////

class ImportedCar : public Cars {
	string auctionDate;
	string auctionGrade;
public:
	ImportedCar(string, int, double, double, string, string, string, string);
	void display() override {
		Cars::display();
		cout << "Auction Date: " << auctionDate << endl;
		cout << "Auction Grade: " << auctionGrade << endl;
	}
};

ImportedCar::ImportedCar(string model, int manufactureYear, double price, double engineSize, string transmission, string chassisNumber, string auctionDate, string auctionGrade) {
	this->manufactureYear = manufactureYear;
	this->price = price;
	this->engineSize = engineSize;
	this->transmission = transmission;
	this->chassisNumber = chassisNumber;
	this->auctionDate = auctionDate;
	this->auctionGrade = auctionGrade;
}

#endif IMPOTED_CARS_H