#include <iostream>
#include <gtest/gtest.h>
#include "selectsort.h"

using namespace std;

int a[5] = {3, 2, 5, 4, 1}; // 簡單的排序數字
int b[5] = {5, 4, 3, 2, 1}; // 將整個排序整個反過來檢測
int c[5] = {-1, 3, -2, 4, 0}; // 檢查可否排序負數
int d[5] = {1, 1, 1, 1, 1}; // 排序一樣的數字

int main(int argc, char **argv){
 //    // 可以手動輸入數字進行排序檢測
	// cout << "Input 5 numbers for sorting" << endl;
	// for(int i = 0; i < 5; i++){
	// 	cin >> a[i];
	// }

    select_sort(a, 5);
    select_sort(b, 5);
    select_sort(c, 5);
    select_sort(d, 5);

 //    // 輸出輸入的數字確認是否輸入有誤
	// for(int i = 0; i < 5; i++){
	// 	cout << a[i] << " " ;
	// }
	// cout << endl;

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// 檢測是否等於所預想的數字大小
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

// // 用小於等於後面數字的檢測方式
// TEST(test_sort_2, test_1){
// 	for(int i = 0; i < 4; i++){
// 		EXPECT_LE(a[i], a[i+1]);
// 	}
// }
