#include "time.hpp"
#include <gtest/gtest.h>

TEST(TimeTest, DefaultConstructor) {
    Time t;
    EXPECT_EQ(t.getHours(), 0);
    EXPECT_EQ(t.getMinutes(), 0);
    EXPECT_EQ(t.getSeconds(), 0);
}

TEST(TimeTest, ConstructorWithArguments) {
    Time t(12, 30, 45);
    EXPECT_EQ(t.getHours(), 12);
    EXPECT_EQ(t.getMinutes(), 30);
    EXPECT_EQ(t.getSeconds(), 45);
}

TEST(TimeTest, SetterGetter) {
    Time t;
    t.setHours(10);
    t.setMinutes(20);
    t.setSeconds(30);
    EXPECT_EQ(t.getHours(), 10);
    EXPECT_EQ(t.getMinutes(), 20);
    EXPECT_EQ(t.getSeconds(), 30);
}

TEST(TimeTest, AddHours) {
    Time t(12, 0, 0);
    t.addHours(2);
    EXPECT_EQ(t.getHours(), 14);
}

TEST(TimeTest, AddMinutes) {
    Time t(12, 0, 0);
    t.addMinutes(30);
    EXPECT_EQ(t.getMinutes(), 30);
}

TEST(TimeTest, AddSeconds) {
    Time t(12, 0, 0);
    t.addSeconds(45);
    EXPECT_EQ(t.getSeconds(), 45);
}

TEST(TimeTest, ToSeconds) {
    Time t(1, 30, 45);
    EXPECT_EQ(t.toSeconds(), 5445);
}

TEST(TimeTest, ToHours) {
    Time t(1, 30, 45);
    EXPECT_EQ(t.toHours(), 1);
}

TEST(TimeTest, ToMinutes) {
    Time t(1, 30, 45);
    EXPECT_EQ(t.toMinutes(), 90);
}

TEST(TimeTest, ToString) {
    Time t(1, 30, 45);
    EXPECT_EQ(t.toString(), "1:30:45");
}

TEST(TimeTest, IsEqual) {
    Time t1(12, 30, 45);
    Time t2(12, 30, 45);
    Time t3(10, 20, 30);
    EXPECT_TRUE(t1.isEqual(t2));
    EXPECT_FALSE(t1.isEqual(t3));
}

int testMain(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
