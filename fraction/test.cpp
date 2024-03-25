#include <gtest/gtest.h>
#include "fraction.hpp"

TEST(FractionTests, Add) {
    fraction frac1(1, 2);
    fraction frac2(3, 4);
    fraction sum = frac1.add(frac2);
    ASSERT_EQ(sum.getNumerator(), 10);
    ASSERT_EQ(sum.getDenominator(), 8);
}

TEST(FractionTests, Subtract) {
    fraction frac1(1, 2);
    fraction frac2(3, 4);
    fraction difference = frac1.subtract(frac2);
    ASSERT_EQ(difference.getNumerator(), -2);
    ASSERT_EQ(difference.getDenominator(), 8);
}

TEST(FractionTests, Multiply) {
    fraction frac1(1, 2);
    fraction frac2(3, 4);
    fraction product = frac1.multiply(frac2);
    ASSERT_EQ(product.getNumerator(), 3);
    ASSERT_EQ(product.getDenominator(), 8);
}

TEST(FractionTests, Divide) {
    fraction frac1(1, 2);
    fraction frac2(3, 4);
    fraction quotient = frac1.divide(frac2);
    ASSERT_EQ(quotient.getNumerator(), 4);
    ASSERT_EQ(quotient.getDenominator(), 6);
}

TEST(FractionTests, IsEqual) {
    fraction frac1(1, 2);
    fraction frac2(3, 4);
    ASSERT_FALSE(frac1.isEqual(frac2));
}

int testMain(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}