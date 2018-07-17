CFLAG=-std=c++11 -lgtest -lpthread
test.exe:factorial.cpp
	g++ $< -o $@ ${CFLAG}