#include<iostream>
#include"EV.h"
#include<string>
using namespace std;

EV::EV(){
long double range = 0;
int year = 0;
};

//Accessors and Mutators

string EV::getM() {
	return model;
};
int EV::getR() {
	return range;
};
string EV::getU() {
	return unit;
};
int EV::getY() {
	return year;
};
string EV::setM(string p) {
	getline(cin, p);
	  model = p;
	 return model;
};
int EV::setR(int a) {
	cin >> a;
	 range = a;
	 return range;
};
string EV::setU(string y) {
	cin >> y;
	unit = y;
	return unit;
};
int EV::setY(int b) {
	cin >> b;
      year = b;
	  return year;
};

//supporting functions

void EV::info() {
	cout<< "The EV "<<model<< " manufactured in " << year << " has a range of " << range << " " << unit;
};
 long double EV::convert() {
	
	if (unit == "kilometer") {
		return range * 06214;
	}
	else if (unit == "miles") {
		return range * 1.609;
	}
	return 0;
	
};
//this point is a generic parameter to all member functions
void EV::compare(EV* P) {
	if (P->getR() > this->getR()) {
		this->info();
		cout << "\n" << "drives a longer distance on a single charge than \n";
		P->info();
	}
	else if (P->getR() < this->getR()){ 
		this->info();
	cout << "\n" << "drives a shorter distance on a single charge than \n";
	    P->info();
	}
	else if (P->getR() == this->getR()) {
		this->info();
		cout << "\n" << "drives the same distance on a single charge as \n";
		P->info();
	}


};