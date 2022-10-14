// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Sep 2022
// This program adds two numbers

#include <iomanip>
#include <iostream>

int main() {
    // this function adds two numbers
    const int SPECIAL_NUMBER = 5;
    int userNumber;

    // input
    std::cout << "This program is a guessing game." << std::endl;
    std::cout << "Enter a number between 0-9: ";
    std::cin >> userNumber;

    // process
    if (userNumber == SPECIAL_NUMBER) {
        // output
        std::cout << "YAY! You guessed the correct number!";
    }

    if (userNumber != SPECIAL_NUMBER) {
        // output
        std::cout << "Try again";
    }

    std::cout << "\nDone." << std::endl;
}
