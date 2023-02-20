// Lab2.cpp : Michael Charles Nolan
#include <iostream>
using namespace std;
int main()
{
    int day;
    int month;
    int year;
    int ex_m;
    int ex_y;
    int choice;
    int Lday;
    int ynum2;
    int ynum3;
    int mnum1;
    int mnum2;
    int ynum1;

    std::cout << "What is your choice (1 or 2)" << std::endl;
    std::cin >> choice;
    switch (choice)
    {
    case 1:

        std::cout << "Enter the birthday (day month year): " << std::endl;
        std::cin >> day >> month >> year;
        std::cout << std::endl;

        ynum1 = (year % 1000 / 100);
        ynum2 = (year % 1000 % 100 / 10);
        ynum3 = (year % 1000 % 100 % 10);
        mnum1 = (month / 10);
        mnum2 = (month % 10);
        Lday = (day % 10);


        if ((month % 4 == 0) && (month % 3 != 0)) 
            month *= 5;
        
        else if ((month % 3 == 0) && (month % 4 != 0)) 
            month = month * 10 + Lday;
        
        else 
            month *= 7;
        

        if (day <= 9)
            std::cout << "Your phone number is " << "(514)" << "0" << day << month << ynum1 << ynum2 << ynum3;
        else
            std::cout << "Your phone number is " << "(514)" << day << month << ynum1 << ynum2 << ynum3;
        break;

    case 2:

        std::cout << "Enter the card expiration date (month year): " << std::endl;
        std::cin >> ex_m >> ex_y;
        std::cout << std::endl;

        if (ex_m <= 9) 
            std::cout << "Card expiration date is " << "0" << ex_m << "/" << ex_y + 2000;
        else
            std::cout << "Card expiration date is " << ex_m << "/" << ex_y + 2000;

        break;




    }

    return 0;
}

    

   