#include <iostream>
#include <gtest/gtest.h>
#include "selectsort.h"

using namespace std;

int a[5] = {3, 2, 5, 4, 1};
int b[5] = {5, 4, 3, 2, 1};
int c[5] = {-1, 3, -2, 4, 0};
int d[5] = {1, 1, 1, 1, 1};

int main(int argc, char **argv){
	// cout << "Input 5 numbers for sorting" << endl;
	// for(int i = 0; i < 5; i++){
	// 	cin >> a[i];
	// }

    select_sort(a, 5);
    select_sort(b, 5);
    select_sort(c, 5);
    select_sort(d, 5);

	// for(int i = 0; i < 5; i++){
	// 	cout << a[i] << " " ;
	// }
	// cout << endl;

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(test_a, test){
    EXPECT_EQ(a[0], 1);
    EXPECT_EQ(a[1], 2);
    EXPECT_EQ(a[2], 3);
    EXPECT_EQ(a[3], 4);
    EXPECT_EQ(a[4], 5);
}
TEST(test_b, test){
    EXPECT_EQ(b[0], 1);
    EXPECT_EQ(b[1], 2);
    EXPECT_EQ(b[2], 3);
    EXPECT_EQ(b[3], 4);
    EXPECT_EQ(b[4], 5);
}
TEST(test_c, test){
    EXPECT_EQ(c[0], -2);
    EXPECT_EQ(c[1], -1);
    EXPECT_EQ(c[2], 0);
    EXPECT_EQ(c[3], 3);
    EXPECT_EQ(c[4], 4);
}
TEST(test_d, test){
    EXPECT_EQ(d[0], 1);
    EXPECT_EQ(d[1], 1);
    EXPECT_EQ(d[2], 1);
    EXPECT_EQ(d[3], 1);
    EXPECT_EQ(d[4], 1);
}


// TEST(test_sort_2, test_1){
// 	for(int i = 0; i < 4; i++){
// 		EXPECT_LE(a[i], a[i+1]);
// 	}
// }
