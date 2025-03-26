#pragma once
#ifndef SALE_H
#define SALE_H

#include <iostream>
#include <string>
#include "Cars.h"
#include "Imported_Cars.h"
#include "Customer.h"
#include "Employee.h"

using namespace std;
class Sale {
	Customer customer;
	Employee employee;
	Cars car;
	double discount;
	double finalPrice;
public:
	Sale(Customer, Employee, Cars, double);
	void display();
};

Sale::Sale(Customer customer, Employee employee, Cars car, double discount) {
	this->customer = customer;
	this->employee = employee;
	this->car = car;
	this->discount = discount;
	finalPrice = car.getFinalPrice() - discount;
}

void Sale::display() {
	customer.display();
	employee.display();
	car.display();
	cout << "Discount: " << discount << endl;
	cout << "Final Price: " << finalPrice << endl;
}
#endif SALE_H

