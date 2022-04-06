// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on April 2022
// The number game

#include <iostream>
#include <random>
#include <string>



int main() {
    // this function is a guessing game
    std::string GUESS_STRING;
     int GUESS;
    int NUMBER_ANSWER;

    std::random_device rseed;
    // mersenne_twister
    std::mt19937 rgen(rseed());
    // random number between [1,9]
    std::uniform_int_distribution <int> idist(1 , 9);
    NUMBER_ANSWER = idist(rgen);

    std::cout << "The number game";
    std::cout << "" << std::endl;
    std::cout << "Guess a number between 1 and 9";
    // input
    std::cout << "" << std::endl;
    std::cout << "enter number: ";
    std::cin >> GUESS_STRING;

    // process
    try {
        GUESS = std::stoi(GUESS_STRING);
        if (GUESS == NUMBER_ANSWER) {
           std::cout << "You win!";
        } else {
            std::cout << "You lose :(";
        }
    } catch (std::invalid_argument) {
        std::cout << "\nNot a number";
    }
    std::cout << "" << std::endl;
    std::cout << "\nDone.";
}
