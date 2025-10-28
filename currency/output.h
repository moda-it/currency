#ifndef OUTPUT_H
#define OUTPUT_H

#include <iostream>
#include <string>

void printResult(double result, const std::string& currency) {
    std::cout << "Конвертована сумма: " << result << " " << currency << std::endl;
}

#endif