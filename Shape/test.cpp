
#include <gtest/gtest.h>
#include "shape.hpp"

TEST(ShapeTest, AreaTest) { 
    Shape shape(5, 7); 
    EXPECT_EQ(shape.getArea(), 35); 
    }

TEST(ShapeTest, PerimeterTest) { 
    Shape shape(5, 7);
     EXPECT_EQ(shape.getPerimeter(), 24);
    }

int testMain(int argc, char **argv) {
     ::testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
    }