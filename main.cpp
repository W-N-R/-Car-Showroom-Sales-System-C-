#include "ShowRoom.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	ShowRoom showroom("WNR Motors", "Johar town Lahore, Punjab, Pakistan","+92-326-1234567", "wnr2901@gmail.com", "(NTN) 24L-6023");
	showroom.display();

	return 0;

}