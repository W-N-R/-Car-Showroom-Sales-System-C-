#pragma once
#ifndef SHOWROOM_H
#define SHOWROOM_H

#include <iostream>
#include <string>
using namespace std;

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