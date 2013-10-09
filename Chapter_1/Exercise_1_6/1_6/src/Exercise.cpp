/*
 * File: 1_1.cpp
 * -------------
 * This program reads a number in Celcius and converts it to
 * Fahrenheit. *
 *
*/

#include <iostream>
#include "console.h"


// Constants
const int SENTINEL = 0;

int main() {
    setConsoleSize(700, 400);

    int value;
    int largest = 0;
    int secondLargest = 0;

    std::cout << "This program finds the largest and second largest integer in a list." << std::endl;
    std::cout << "Enter " << SENTINEL << " to signal the end of the list." << std::endl;

    while (true) {

        std::cout << "? ";
        std::cin >> value;
        if (value == SENTINEL) break;

        if(value > largest) {
            secondLargest = largest;
            largest = value;
        }

    }

    std::cout << "The largest value was" << largest << ".";
    std::cout << "The second largest value was" << secondLargest << ".";


    return 0;
}
