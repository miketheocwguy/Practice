//date1.h    //changed to date1 because of file issues

#ifndef DATE1_H_
#define DATE1_H_
#include <string>
using namespace std;

class Date {
public:
	Date(int = 1, int = 1, int = 2000);
	void setDate(int, int, int);
	void printDate() const;
	string convMonth();
	void newdate();


private:
	int day;
	int month;
	int year;
};


#endif /* DATE_H_ */

#pragma once
----------------------------------------------------------------------------------------------


#include <iostream>
// date1.cpp //
#include "date1.h"
using namespace std;

Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void Date::setDate(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void Date::printDate() const {
	cout << month << "/" << day << "/" << year << "\n";
}
string Date::convMonth() {//takes months in an array postion and converts it into the char based on it position 
	if ((month > 0) && (month <= 12)) {
		string a[] = { "January","Febuary","March","April","May","June","July","Agust","September","October","November","December" };
		return a[month];
	}

}
void Date::newdate() {
	if (day <= 9) {
		cout << convMonth() << " " << "0" << day << ", " << year;
	}
	else {
		cout << convMonth() << " " << day << ", " << year;
	}
}
--------------------------------------------------------------------------------------------------------
//testdate1.cpp

#include<iostream>
#include"date1.h"

int main() {
	int a, b, c, d, e, f;

	Date* p = new Date();   //creates an object in the heap memory
	Date* q = new Date();

	cout << "Date (d,m,yyyy): ";
	cin >> a >> b >> c;
	p->setDate(a, b, c);
	p->newdate();
	cout << endl;
	cout << endl;
	cout << "Date (d,m,yyyy): ";
	cin >> d >> e >> f;
	q->setDate(d, e, f); //dereference the function
	q->newdate();
}
---------------------------------------------------------------------------------------------------------
// matrix.cpp
#include<iostream>
	using namespace std;

	int a[2][2];
	int b[2][2];

		void isIdentity() {
			if ((a[0][0] == 1) && (a[1][1] == 1) && (a[0][1] == 0) && (a[1][0] == 0)) {
				cout << "Is an identity matrix";
			}
			else
				cout << "Is not an identity matrix";
		}
		int det() {
			return ((a[0][0] * a[1][1]) - (a[0][1] * a[1][0]));
		}
		void addArrays() {
			int c[2][2];
				c[0][0] = (a[0][0] + b[0][0]);
				c[0][1] = (a[0][1] + b[0][1]);
				c[1][0] = (a[1][0] + b[1][0]);
				c[1][1] = (a[1][1] + b[1][1]);	
				cout << "the adding the two matrices result in the following matrix" << endl << endl;
				cout<< c[0][0] << " " << c[0][1]<< "\n"<< c[1][0] << " " << c[1][1]<< endl<<endl;
		}
		bool isequal() {
			if(((a[0][0] - b[0][0]) == 0)&&((a[0][1] - b[0][1])==0)&&((a[1][0] - b[1][0])==0)&&((a[1][1] - b[1][1])==0) ) {
				return true;
			}
			else return false;
		}

	int main() {
	
		cout << "Please enter a 2x2 matrix : ";
		
		for (int i = 0; i <= 1;i++) {
			for (int j = 0;j <= 1;j ++ ) {
				cin >> a[i][j];
			}
		}
		isIdentity();
		cout << "\n" << det()<<endl;
		cout << "Please enter another 2x2 matrix : ";
		
		for (int i = 0; i <= 1;i++) {
			for (int j = 0;j <= 1;j++) {
				cin >> b[i][j];
			}
		}
		addArrays();
		if (isequal() == true) {
			cout << "the two matrices are equal"<<endl;
		}
		else {
			cout << "the two matrices are not equal"<<endl;
		}
	}
