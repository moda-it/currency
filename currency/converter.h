#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>

double convert(double amount, const std::string& fromCurrency, const std::string& toCurrency) {
    double rate = 1.0;

    if (fromCurrency == "USD" && toCurrency == "EUR") rate = 0.89;
    else if (fromCurrency == "USD" && toCurrency == "UAH") rate = 41.5;
    else if (fromCurrency == "EUR" && toCurrency == "USD") rate = 1.11;
    else if (fromCurrency == "EUR" && toCurrency == "UAH") rate = 43;
    else if (fromCurrency == "UAH" && toCurrency == "USD") rate = 0.025;
    else if (fromCurrency == "UAH" && toCurrency == "EUR") rate = 0.02;

    return amount * rate;
}

#endif