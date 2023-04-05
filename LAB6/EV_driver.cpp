// EV_driver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"EV.h"

using namespace std;
    string x;
    int a;
    string y;
    int b;

    string xx;
    int aa;
    string yy;
    int bb;
int main()
{
   
    EV R;
    EV* P;
    P = &R;
    EV Z;
    EV* L;
    L = &Z;
   
    cout << "load first EV\n" << "Enter EV Model: ";
    R.setM(x);
    cout << "\n" << "Enter year manufactured: ";
    R.setY(a);
    cout << "\n" << "Enter range unit (miles or kilometers) : ";
    R.setU(y);
    cout << "\n" << "You choose " << R.getU() << " ,so please enter range in " << R.getU()<<" : ";
    R.setR(b);
    cout << endl;
    cin.ignore();
    cout << "load second EV" << endl;
    cout<< "Enter EV Model: ";
    Z.setM(xx);
    
    cout << "\n" << "Enter year manufactured: ";
    Z.setY(aa);
    cout << "\n" << "Enter range unit (miles or kilometers) : ";
    Z.setU(yy);
    cout << "\n" << "You choose " << Z.getU() << " ,so please enter range in " << Z.getU() << " : ";
    Z.setR(bb);
    cout << "\n";
    P->compare(L);

}

