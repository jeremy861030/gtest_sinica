#include <iostream>
#include <gtest/gtest.h>
#include "selectsort.h"

using namespace std;

int a[5];

int main(int argc, char **argv){
	cout << "Input 5 numbers for sorting" << endl;
	for(int i = 0; i < 5; i++){
		cin >> a[i];
	}

    select_sort(a, 5);

	for(int i = 0; i < 5; i++){
		cout << a[i] << " " ;
	}
	cout << endl;

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(test_sort_1, test){
    EXPECT_EQ(a[0], 1);
    EXPECT_EQ(a[1], 2);
    EXPECT_EQ(a[2], 3);
    EXPECT_EQ(a[3], 4);
    EXPECT_EQ(a[4], 5);
}

TEST(test_sort_2, test_1){
	for(int i = 0; i < 4; i++){
		EXPECT_LE(a[i], a[i+1]);
	}
}
