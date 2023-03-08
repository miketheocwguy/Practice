// CharlesNolan_40180607_Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int nums[10], n = 10;
void seperateEven()
{

    for (int x : nums) {
        if (x % 2 == 0) {
            std::cout << x;
            std::cout << " ";
        }

    }

}
void seperateOdd()
{
    for (int x : nums) {
        if (x % 2 != 0) {
            std::cout << x;
            std::cout << " ";
        }
    }

}
int main()
{

    std::cout << "Please enter 10 integers in order: ";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::cout << std::endl;
    std::cout << "the content of of auxiliary array is: " << std::endl;
    std::cout << std::endl;
    seperateEven();
    seperateOdd();

    return 0;
}

