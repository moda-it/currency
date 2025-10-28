#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include <string>

double getAmount() {
    double amount;
    std::cout << "¬вед≥ть к≥льк≥сть грошей: ";
    std::cin >> amount;
    return amount;
}

std::string getCurrency(const std::string& message) {
    std::string curr;
    std::cout << message;
    std::cin >> curr;
    return curr;
}

#endif