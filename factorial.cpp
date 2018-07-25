#include <iostream>
#include <gtest/gtest.h>
#include <assert.h>

using namespace std;

double factorial(const int n);

TEST(test_factorial, test){
    EXPECT_EQ(1, factorial(0));
    EXPECT_EQ(1, factorial(1));
    EXPECT_EQ(2, factorial(2));
    EXPECT_EQ(6, factorial(3));
    EXPECT_EQ(24, factorial(4));
    EXPECT_EQ(120, factorial(5));
    EXPECT_EQ(720, factorial(6));
    EXPECT_EQ(5040, factorial(7));
    EXPECT_EQ(40320, factorial(8));
    EXPECT_EQ(362880, factorial(9));
    EXPECT_EQ(3628800, factorial(10));
    // assert(factorial(5)!=120);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

double factorial(const int n){
	if(n > 1)
	    return n*factorial(n-1);
	else
	    return 1;
}
