CFLAG=-std=c++11 -lgtest -lpthread
sort_test:sort_test.cpp sortMethods.c
	g++ $^ -o $@ ${CFLAG}