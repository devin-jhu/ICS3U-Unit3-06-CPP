// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// The number game

#include <iostream>

int main() {
    // this function is a guessing game
    int NumberAnswer = 7;
    int Guess;

    std::cout << "The number game";
    std::cout << "" << std::endl;
    std::cout << "Guess a number between 1 and 9";
    // input
    std::cout << "" << std::endl;
    std::cout << "enter number: ";
    std::cin >> Guess;

    // process
    if (Guess == NumberAnswer) {
        std::cout << "You win!";
    } else {
        std::cout << "You lose :(";
    }
    std::cout << "" << std::endl;
    std::cout << "Done.";
}
