// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// The number game

#include <iostream>
#include <random>


int main() {
    // this function is a guessing game
    int NUMBER_ANSWER;

    std::random_device rseed;
    // mersenne_twister
    std::mt19937 rgen(rseed());
    // randome number between [1,9]
    std::uniform_int_distribution <int> idist(1 , 9);
    NUMBER_ANSWER = idist(rgen);
    int GUESS;

    std::cout << "The number game";
    std::cout << "" << std::endl;
    std::cout << "Guess a number between 1 and 9";
    // input
    std::cout << "" << std::endl;
    std::cout << "enter number: ";
    std::cin >> GUESS;

    // process
    if (GUESS == NUMBER_ANSWER) {
        std::cout << "You win!";
    } else {
        std::cout << "You lose :(";
    }
    std::cout << "" << std::endl;
    std::cout << "Done.";
}
