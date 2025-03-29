#pragma once
#ifndef BUYER_H
#define BUYER_H

#include <iostream>
#include <string>
using namespace std;

class Buyer {
private:
    string name;
    string cnic;
    string contactNumber;
    string email;
    string address;
public:
    Buyer(string name, string cnic, string contact, string email, string address);
    void displayBuyerInfo() const;
};

Buyer::Buyer(string name, string cnic, string contact, string email, string address) {
    this->name = name;
    this->cnic = cnic;
    this->contactNumber = contact;
    this->email = email;
    this->address = address;
}

void Buyer::displayBuyerInfo() const {
    cout << "\nBuyer Details:\n";
    cout << "Name: " << name << "\nCNIC: " << cnic
        << "\nContact: " << contactNumber << "\nEmail: " << email
        << "\nAddress: " << address << "\n";
}

#endif // BUYER_H
#pragma once
