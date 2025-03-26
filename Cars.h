#pragma once
#ifndef CARS_H
#define CARS_H

#include <iostream>
#include <string>
using namespace std;



/////////////////////////////////CAR CLASS////////////////////////////////////////
class Cars {
protected:
	string model;
	string transmission;
	string chassisNumber;
	int manufactureYear;
	double price;
	double engineSize;
public:
	Cars() {}
	Cars(string, int, double, double, string, string);
	virtual void display();
	virtual double getFinalPrice();
	string getModel();

};

Cars::Cars(string model, int manufactureYear, double price, double engineSize, string transmission, string chassisNumber) {
	this->model = model;
	this->manufactureYear = manufactureYear;
	this->price = price;
	this->engineSize = engineSize;
	this->transmission = transmission;
	this->chassisNumber = chassisNumber;
}
void Cars::display() {
	cout << " | Model: " << model << endl;;
	cout << " | Year: " << manufactureYear << endl;
	cout << " | Price: " << price << endl;
	cout << " | Engine: " << engineSize << endl;
	cout << " | Transmission: " << transmission << endl;
}
double Cars::getFinalPrice() {
	return price;
}
string Cars::getModel() {
	return model;
}

#endif // !CARS_H