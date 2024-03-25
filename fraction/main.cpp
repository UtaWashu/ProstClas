#include <iostream>
#include "fraction.hpp"

int main() {
    fraction frac1(1, 2);
    fraction frac2(3, 4);
    
    fraction sum = frac1.add(frac2);
    std::cout << frac1.getNumerator() << "/" << frac1.getDenominator() << " + "
              << frac2.getNumerator() << "/" << frac2.getDenominator() << " = "
              << sum.getNumerator() << "/" << sum.getDenominator() << std::endl;
    
    fraction difference = frac1.subtract(frac2);
    std::cout << frac1.getNumerator() << "/" << frac1.getDenominator() << " - "
              << frac2.getNumerator() << "/" << frac2.getDenominator() << " = "
              << difference.getNumerator() << "/" << difference.getDenominator() << std::endl;
    
    fraction product = frac1.multiply(frac2);
    std::cout << frac1.getNumerator() << "/" << frac1.getDenominator() << " * "
              << frac2.getNumerator() << "/" << frac2.getDenominator() << " = "
              << product.getNumerator() << "/" << product.getDenominator() << std::endl;
    
    fraction quotient = frac1.divide(frac2);
    std::cout << frac1.getNumerator() << "/" << frac1.getDenominator() << " / "
              << frac2.getNumerator() << "/" << frac2.getDenominator() << " = "
              << quotient.getNumerator() << "/" << quotient.getDenominator() << std::endl;
    
    bool equal = frac1.isEqual(frac2);
    std::cout << frac1.getNumerator() << "/" << frac1.getDenominator()
              << (equal ? " is" : " is not") << " equal to "
              << frac2.getNumerator() << "/" << frac2.getDenominator() << std::endl;
    
    return 0;
}