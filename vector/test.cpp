#include "vector.hpp"
#include <gtest/gtest.h>

TEST(VectorTest, Length) {
    Vector v(3, 4, 5);
    EXPECT_EQ(v.getLength(), 7.07106781187);
}

TEST(VectorTest, AngleX) {
    Vector v(1, 0, 0);
    EXPECT_EQ(v.getAngleX(), 0.0);
}

TEST(VectorTest, AngleY) {
    Vector v(0, 1, 0);
    EXPECT_EQ(v.getAngleY(), 1.57079632679);
}

TEST(VectorTest, AngleZ) {
    Vector v(0, 0, 1);
    EXPECT_EQ(v.getAngleZ(), 1.57079632679);
}

TEST(VectorTest, Addition) {
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);
    Vector result = v1 + v2;
    EXPECT_EQ(result, Vector(5, 7, 9));
}

TEST(VectorTest, Subtraction) {
    Vector v1(1, 2, 3);
    Vector v2(4, 5, 6);
    Vector result = v1 - v2;
    EXPECT_EQ(result, Vector(-3, -3, -3));
}

TEST(VectorTest, Multiplication) {
    Vector v(2, 3, 4);
    Vector result = v * 3.0;
    EXPECT_EQ(result, Vector(6, 9, 12));
}

TEST(VectorTest, Equality) {
    Vector v1(1, 2, 3);
    Vector v2(1, 2, 3);
    EXPECT_TRUE(v1 == v2);
}

TEST(VectorTest, SaveAndLoad) {
    Vector v1(4, 5, 6);
    v1.saveToFile("test_vector.txt");
    
    Vector v2;
    v2.loadFromFile("test_vector.txt");
    EXPECT_EQ(v1, v2);
}

int testMain(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}