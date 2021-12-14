// Copyright © 2021 Dylan Melo All rights reserved
//
// Created by Dylan Melo
// Created on December 2021
// This program gets the user to enter an integer
// between -10 and 10 and tells them if it's positive, negative or 0.
#include <iostream>

int main() {
    // declare variables via int
    int userNumber;

    // get user input

    std::cout << "Enter your number: ";
    std::cin >> userNumber;

    // if else statement
    if (userNumber > 10) {
        std::cout << "Number must be under 10.";
    } else if (userNumber > 0) {
        std::cout << "Your number is positive";
    } else if (userNumber <-10) {
        std::cout << "Number must be over -10.";
    } else if (userNumber < 0) {
        std::cout << "Your number is negative";
    }
}
