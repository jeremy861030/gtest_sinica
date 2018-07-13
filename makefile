CFLAG = -std =c++11 -lgtest -lpthread
test.exe:test.cpp
	g++ $< -o $@ ${CFLAG}