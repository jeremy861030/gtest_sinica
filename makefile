CFLAG=-std=c++11 -lgtest -lpthread
sort_test.exe:sort_test.cpp sortMethods.h
	g++ $< -o $@ ${CFLAG}