// Copyright (c) 2019 Davin Rousseau All rights reserved
//
// Created by: Davin Rousseau
// Created on October 2019
// this program asks user to enter a year above or equal to 0
// and calculates if the year is a leap year or not

#include <iostream>
#include <string>

int main() {
    // this function calculates the average between 3 given integers
    std::string integer;
    int year;


    // input
    std::cout << "Enter a year above or equal to 0: ";

    std::cin >> integer;

    std::cout << "" << std::endl;

    // process
    try {
        year = std::stoi(integer);

        if (year >= 0) {
            if (year % 4 ==0 && year % 100 != 0) {
                std::cout << "This is a leap year";


            } else if (year % 100 == 0 && year % 400 == 0) {
                std::cout << "This is a leap year";

            } else {
                std::cout << "This is not a leap year";
            }
        } else {
            std::cout << "Invalid input.";
        }
        return 0;
    }
     catch (std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}
