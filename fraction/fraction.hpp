#ifndef FRACTION_HPP
#define FRACTION_HPP

class fraction {
private:
    int numerator;
    int denominator;
    
public:
    fraction(int num, int den);
    int getNumerator();
    int getDenominator();
    void setNumerator(int num);
    void setDenominator(int den);
    fraction add(fraction frac);
    fraction subtract(fraction frac);
    fraction multiply(fraction frac);
    fraction divide(fraction frac);
    bool isEqual(fraction frac);
};

#endif