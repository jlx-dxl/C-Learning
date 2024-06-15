#include <iostream>

using namespace std;

class MyInt
{
	friend ostream& operator<<(ostream& os, MyInt& myint);
public:
	MyInt();
	MyInt(const MyInt& myint);
	MyInt& operator++();
	MyInt& operator++(int);
private:
	int value;
};

ostream& operator<<(ostream& os, MyInt& myint);