// LAB1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double Small_pizza_price = 8;
    double Larg_pizza_price = 12;
    int s_number, L_number, points;
    double total;

    cout << "number of small pizzas: "<<endl;
    cin >> s_number;
    cout << "number of large pizzas: ";
    cin >> L_number;

    total = (Small_pizza_price * s_number) + (Larg_pizza_price * L_number);
   
    points = (total / 3);

    cout << "Your total bill for" << s_number << "small pizzas and" << L_number << "large pizzas is" << total << "and your points is"<< points;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
