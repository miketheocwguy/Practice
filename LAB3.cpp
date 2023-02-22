// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Michael charles nolan 40180607 LAB3

#include <iostream>

int main()
{
	int n;
	
	do
   {
		std::cout << "Enter an even number: ";
		std::cin >> n;
        
	} while (n % 2 != 0);

	for (int i = 0; i < (n / 2); i++)
	{
		int k = n;
		for (int j = 0; j <= i ; j++)
		{
			
			std::cout << k <<"\t";
			k -= 2;
		}
		std::cout << std::endl;
	}
}

