
#include <gtest/gtest.h>

using namespace std;

TEST(SimpleTest, PosZeroNeg) {
    EXPECT_EQ(1, 1);
    ASSERT_EQ(1, 1);
}

TEST(testproducts, TestProduct) {
    ASSERT_EQ(3 * 2, 2 * 3);
}