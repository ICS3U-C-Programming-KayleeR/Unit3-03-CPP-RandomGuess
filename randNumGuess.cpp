// Copyright (c) 2026 Kaylee R All rights reserved.
// .
// Created by: Kaylee R
// Date: 15,10,2026
// This program generates a random
// number from a range of numbers and creates
// a guessing game for the user to
// guess what the number may be.

#include <iostream>

#include <cstdlib>

#include <ctime>

int main() {
    // declare integer to hold random number

    int someRandomNumber, userGuess;

    // initialize random seed

    srand((unsigned)time(NULL));

    // generate a random number between 0 and 9

    someRandomNumber = rand() % 10;  // NOLINT(runtime/threadsafe_fn)

    // get user to guess a number
    std::cout <<"Guess a number from 0 to 9: ";
    std::cin >> userGuess;

    // check if use's guess is correct
    if (userGuess == someRandomNumber) {
        std::cout <<"You have guessed correctly!";
    } else {
        std::cout <<"Incorrect guess. ";
        std::cout <<"The correct answer is: " <<someRandomNumber;
}
}
