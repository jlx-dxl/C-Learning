#include "util.h"

MyInt::MyInt()
{
	this->value = 0;
}

MyInt::MyInt(const MyInt& myint)
{
	this->value = myint.value;
}


MyInt& MyInt::operator++()
{
	value++;
	return *this;
}

MyInt& MyInt::operator++(int)
{
	MyInt *temp = new MyInt(*this);
	value++;
	return *temp;
}

ostream& operator<<(ostream& os, MyInt& myint)
{
	os << myint.value;
	return os;
}