#include <iostream>
#include <windows.h>
#include <string>
#include "util.h"

using namespace std;

MyInt myint;

void test()
{
	cout << myint << endl;
	cout << ++(++myint) << endl;
	cout << (myint++)++ << endl;
	cout << myint << endl;
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);

	test();

	return 0;
}
