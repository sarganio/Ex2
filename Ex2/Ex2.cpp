// Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Fraction.h"

using std::cout;
using std::endl;
int main()
{
	Fraction a(2,3), b(4,5),c;
	c = a/b;
	cout << c.getNumerator()<<"/"<<c.getDenumerator() << endl;
     
	return 0;
}
