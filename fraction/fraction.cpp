#include "fraction.hpp"

fraction::fraction(int num, int den) {
    numerator = num;
    denominator = den;
}

int fraction::getNumerator() {
    return numerator;
}

int fraction::getDenominator() {
    return denominator;
}

void fraction::setNumerator(int num) {
    numerator = num;
}

void fraction::setDenominator(int den) {
    denominator = den;
}

fraction fraction::add(fraction frac) {
    int newNum = (numerator * frac.denominator) + (frac.numerator * denominator);
    int newDen = denominator * frac.denominator;
    return fraction(newNum, newDen);
}

fraction fraction::subtract(fraction frac) {
    int newNum = (numerator * frac.denominator) - (frac.numerator * denominator);
    int newDen = denominator * frac.denominator;
    return fraction(newNum, newDen);
}

fraction fraction::multiply(fraction frac) {
    int newNum = numerator * frac.numerator;
    int newDen = denominator * frac.denominator;
    return fraction(newNum, newDen);
}

fraction fraction::divide(fraction frac) {
    int newNum = numerator * frac.denominator;
    int newDen = denominator * frac.numerator;
    return fraction(newNum, newDen);
}

bool fraction::isEqual(fraction frac) {
    return (numerator == frac.numerator) && (denominator == frac.denominator);
}
