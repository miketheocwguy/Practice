#include<iostream>
#include <string>
#include<stdio.h>
using namespace std;

class EV {
public:
	string model;
	int range;
	string unit;
	int year;
	EV();
	string getM();
	int getR();
	string getU();
	int getY();

	string setM(string p);
	int setR(int a);
	string setU(string y);
	int setY(int b);
	void info();
	long double convert();
	void compare(EV* P);
};