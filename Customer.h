#pragma once
#ifndef Customer_H
#define Customer_H


#include <iostream>
#include <string>
#include "Cars.h"
using namespace std;

class Customer {
	string name;
	string address;
	string contact;
	string email;
	string CNIC;
public:
	Customer(string, string, string, string, string);
	void display();
};

Customer::Customer(string name, string address, string contact, string email, string CNIC) {
	this->name = name;
	this->address = address;
	this->contact = contact;
	this->email = email;
	this->CNIC = CNIC;
}

void Customer::display() {
	cout << "****************************************************************************************************************************************************\n" << endl;
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Contact: " << contact << endl;
	cout << "Email: " << email << endl;
	cout << "CNIC: " << CNIC << endl;
	cout << "****************************************************************************************************************************************************\n" << endl;
}

#endif Customer_H

