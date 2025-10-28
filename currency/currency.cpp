#include <iostream>
#include <string>
#include "input.h"
#include "converter.h"
#include "output.h"

int main() {
    double amount = getAmount();
    std::string from = getCurrency("Введіть валюту з якої конвертувати (USD, EUR, UAH): ");
    std::string to = getCurrency("Введіть валюту в яку конвертувати (USD, EUR, UAH): ");

    double result = convert(amount, from, to);
    printResult(result, to);

    return 0;
}