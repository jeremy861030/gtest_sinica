#include <iostream>
#include <gtest/gtest.h>
#include "sortMethods.h"

using namespace std;


int main(int argc, char **argv){
 //    // 可以手動輸入數字進行排序檢測
	// cout << "Input 5 numbers for sorting" << endl;
	// for(int i = 0; i < 5; i++){
	// 	cin >> a[i];
	// }

 //    // 輸出輸入的數字確認是否輸入有誤
	// for(int i = 0; i < 5; i++){
	// 	cout << a[i] << " " ;
	// }
	// cout << endl;

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

// // 用小於等於後面數字的檢測方式
// TEST(test_sort_2, test_1){
// 	for(int i = 0; i < 4; i++){
// 		EXPECT_LE(a[i], a[i+1]);
// 	}
// }

// 檢測是否等於所預想的數字大小
// select sort
TEST(select_test, test_a){
	int a[5] = {3, 2, 5, 4, 1}; // 簡單的排序數字
	select_sort(a, 5);
    EXPECT_EQ(a[0], 1);
    EXPECT_EQ(a[1], 2);
    EXPECT_EQ(a[2], 3);
    EXPECT_EQ(a[3], 4);
    EXPECT_EQ(a[4], 5);
}
TEST(select_test, test_b){
	int b[5] = {5, 4, 3, 2, 1}; // 將整個排序整個反過來檢測
	select_sort(b, 5);
    EXPECT_EQ(b[0], 1);
    EXPECT_EQ(b[1], 2);
    EXPECT_EQ(b[2], 3);
    EXPECT_EQ(b[3], 4);
    EXPECT_EQ(b[4], 5);
}
TEST(select_test, test_c){
	int c[5] = {-1, 3, -2, 4, 0}; // 檢查可否排序負數
	select_sort(c, 5);
    EXPECT_EQ(c[0], -2);
    EXPECT_EQ(c[1], -1);
    EXPECT_EQ(c[2], 0);
    EXPECT_EQ(c[3], 3);
    EXPECT_EQ(c[4], 4);
}
TEST(select_test, test_d){
	int d[5] = {1, 1, 1, 1, 1}; // 排序一樣的數字
	select_sort(d, 5);
    EXPECT_EQ(d[0], 1);
    EXPECT_EQ(d[1], 1);
    EXPECT_EQ(d[2], 1);
    EXPECT_EQ(d[3], 1);
    EXPECT_EQ(d[4], 1);
}

// insert sort
TEST(insert_test, test_a){
	int a[5] = {3, 2, 5, 4, 1}; // 簡單的排序數字
	insert_sort(a, 5);
    EXPECT_EQ(a[0], 1);
    EXPECT_EQ(a[1], 2);
    EXPECT_EQ(a[2], 3);
    EXPECT_EQ(a[3], 4);
    EXPECT_EQ(a[4], 5);
}
TEST(insert_test, test_b){
	int b[5] = {5, 4, 3, 2, 1}; // 將整個排序整個反過來檢測
	insert_sort(b, 5);
    EXPECT_EQ(b[0], 1);
    EXPECT_EQ(b[1], 2);
    EXPECT_EQ(b[2], 3);
    EXPECT_EQ(b[3], 4);
    EXPECT_EQ(b[4], 5);
}
TEST(insert_test, test_c){
	int c[5] = {-1, 3, -2, 4, 0}; // 檢查可否排序負數
	insert_sort(c, 5);
    EXPECT_EQ(c[0], -2);
    EXPECT_EQ(c[1], -1);
    EXPECT_EQ(c[2], 0);
    EXPECT_EQ(c[3], 3);
    EXPECT_EQ(c[4], 4);
}
TEST(insert_test, test_d){
	int d[5] = {1, 1, 1, 1, 1}; // 排序一樣的數字
	insert_sort(d, 5);
    EXPECT_EQ(d[0], 1);
    EXPECT_EQ(d[1], 1);
    EXPECT_EQ(d[2], 1);
    EXPECT_EQ(d[3], 1);
    EXPECT_EQ(d[4], 1);
}

// bubble sort
TEST(bubble_test, test_a){
	int a[5] = {3, 2, 5, 4, 1}; // 簡單的排序數字
	bubble_sort(a, 5);
    EXPECT_EQ(a[0], 1);
    EXPECT_EQ(a[1], 2);
    EXPECT_EQ(a[2], 3);
    EXPECT_EQ(a[3], 4);
    EXPECT_EQ(a[4], 5);
}
TEST(bubble_test, test_b){
	int b[5] = {5, 4, 3, 2, 1}; // 將整個排序整個反過來檢測
	bubble_sort(b, 5);
    EXPECT_EQ(b[0], 1);
    EXPECT_EQ(b[1], 2);
    EXPECT_EQ(b[2], 3);
    EXPECT_EQ(b[3], 4);
    EXPECT_EQ(b[4], 5);
}
TEST(bubble_test, test_c){
	int c[5] = {-1, 3, -2, 4, 0}; // 檢查可否排序負數
	bubble_sort(c, 5);
    EXPECT_EQ(c[0], -2);
    EXPECT_EQ(c[1], -1);
    EXPECT_EQ(c[2], 0);
    EXPECT_EQ(c[3], 3);
    EXPECT_EQ(c[4], 4);
}
TEST(bubble_test, test_d){
	int d[5] = {1, 1, 1, 1, 1}; // 排序一樣的數字
	bubble_sort(d, 5);
    EXPECT_EQ(d[0], 1);
    EXPECT_EQ(d[1], 1);
    EXPECT_EQ(d[2], 1);
    EXPECT_EQ(d[3], 1);
    EXPECT_EQ(d[4], 1);
}

// shell sort
TEST(shell_test, test_a){
	int a[5] = {3, 2, 5, 4, 1}; // 簡單的排序數字
	shell_sort(a, 5);
    EXPECT_EQ(a[0], 1);
    EXPECT_EQ(a[1], 2);
    EXPECT_EQ(a[2], 3);
    EXPECT_EQ(a[3], 4);
    EXPECT_EQ(a[4], 5);
}
TEST(shell_test, test_b){
	int b[5] = {5, 4, 3, 2, 1}; // 將整個排序整個反過來檢測
	shell_sort(b, 5);
    EXPECT_EQ(b[0], 1);
    EXPECT_EQ(b[1], 2);
    EXPECT_EQ(b[2], 3);
    EXPECT_EQ(b[3], 4);
    EXPECT_EQ(b[4], 5);
}
TEST(shell_test, test_c){
	int c[5] = {-1, 3, -2, 4, 0}; // 檢查可否排序負數
	shell_sort(c, 5);
    EXPECT_EQ(c[0], -2);
    EXPECT_EQ(c[1], -1);
    EXPECT_EQ(c[2], 0);
    EXPECT_EQ(c[3], 3);
    EXPECT_EQ(c[4], 4);
}
TEST(shell_test, test_d){
	int d[5] = {1, 1, 1, 1, 1}; // 排序一樣的數字
	shell_sort(d, 5);
    EXPECT_EQ(d[0], 1);
    EXPECT_EQ(d[1], 1);
    EXPECT_EQ(d[2], 1);
    EXPECT_EQ(d[3], 1);
    EXPECT_EQ(d[4], 1);
}

// quick sort
TEST(quick_test, test_a){
	int a[5] = {3, 2, 5, 4, 1}; // 簡單的排序數字
	quick_sort(a, 0, 4);
    EXPECT_EQ(a[0], 1);
    EXPECT_EQ(a[1], 2);
    EXPECT_EQ(a[2], 3);
    EXPECT_EQ(a[3], 4);
    EXPECT_EQ(a[4], 5);
}
TEST(quick_test, test_b){
	int b[5] = {5, 4, 3, 2, 1}; // 將整個排序整個反過來檢測
	quick_sort(b, 0, 4);
    EXPECT_EQ(b[0], 1);
    EXPECT_EQ(b[1], 2);
    EXPECT_EQ(b[2], 3);
    EXPECT_EQ(b[3], 4);
    EXPECT_EQ(b[4], 5);
}
TEST(quick_test, test_c){
	int c[5] = {-1, 3, -2, 4, 0}; // 檢查可否排序負數
	quick_sort(c, 0, 4);
    EXPECT_EQ(c[0], -2);
    EXPECT_EQ(c[1], -1);
    EXPECT_EQ(c[2], 0);
    EXPECT_EQ(c[3], 3);
    EXPECT_EQ(c[4], 4);
}
TEST(quick_test, test_d){
	int d[5] = {1, 1, 1, 1, 1}; // 排序一樣的數字
	quick_sort(d, 0, 4);
    EXPECT_EQ(d[0], 1);
    EXPECT_EQ(d[1], 1);
    EXPECT_EQ(d[2], 1);
    EXPECT_EQ(d[3], 1);
    EXPECT_EQ(d[4], 1);
}