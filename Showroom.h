#pragma once
#ifndef SHOWROOM_H
#define SHOWROOM_H

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





/////////////////////////////////USED CAR CLASS////////////////////////////////////////


class UsedCar : public Cars {
	string registrationNumber;
public:
	UsedCar(string, int, double, double, string, string, string);
	void display() override {  // polymorphism ka concept use kia ha 
		Cars::display();       //(base class kay fuction main bas addition ho gay gii)
		cout << "Registration: " << registrationNumber << endl;
	}
};

UsedCar::UsedCar(string model, int manufactureYear, double price, double engineSize, string transmission, string chassisNumber, string registrationNumber){
	this->model = model;
	this->manufactureYear = manufactureYear;
	this->price = price;
	this->engineSize = engineSize;
	this->transmission = transmission;
	this->chassisNumber = chassisNumber;
	this->registrationNumber = registrationNumber;
}


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




/////////////////////////////////SHOWROOM CLASS////////////////////////////////////////


class ShowRoom {
	string Name_of_showroom;
	string Address;
	string contact_number;
	string email;
	string sales_tax_registration_number;
public:
	ShowRoom(string, string, string, string, string);
	void display();
	};
ShowRoom::ShowRoom(string name, string address, string contact, string email, string sale_tax) {
	Name_of_showroom = name;
	Address = address;
	contact_number = contact;
	this->email = email;
	sales_tax_registration_number = sale_tax;

}

void ShowRoom ::display(){
		cout << "****************************************************************************************************************************************************\n" << endl;
		cout <<  "                                                                   " << Name_of_showroom << endl;
		cout << "Contact Number: " <<  contact_number << endl;
		cout << "Email: "<< email << endl;
		cout << "Sales Tax Registration Number: " << sales_tax_registration_number << endl << endl;
		cout << "****************************************************************************************************************************************************\n" << endl;
}

#endif 