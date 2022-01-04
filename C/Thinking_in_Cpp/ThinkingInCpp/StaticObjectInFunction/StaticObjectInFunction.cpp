#include<iostream>
using namespace std;

class X {
	int i;
public:
	X(int ii=0):i(ii){}
	~X() { cout << "X::~X()" << endl; }
};