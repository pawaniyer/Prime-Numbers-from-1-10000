//: Prime Numbers.cpp

/*
Title: Prime Numbers.cpp
Description: Program that prints all prime numbers between 1 to 10,000.
Date: January 10, 2021
Author: Pawan Iyer
Version: 1.0
Copyright: 2021 Pawan Iyer
*/

/*
Program Purpose:
Program that uses two nested for loops and the modulus
operator (%) to detect and print the prime numbers from 1 to 10,000.
*/

#include <iostream>
using namespace std;

int main(); //Initializer

int main()
{
    double indicator = 0;
    for (int x = 2; x < 10000; ++x) // loop that starts at 2 (smallest prime number) and goes till 10,000
    {
        indicator = 0;

        for (int y = 2; y <= x*0.5; ++y) // nested loop that starts at 2, and goes till <= half of x
        {

            if (x % y == 0) // checks if the remainder of the quotient of x/y is 0
            {
                indicator = 1;
                break;  // break because, this means it is not a prime number
            }

        }

        if(indicator == 0)
        {
            std::cout << x << ", "; // print output to console, if x is a prime number
        }
        
    }
return 0;
}

