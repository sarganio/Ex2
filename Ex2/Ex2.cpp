// Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Fraction.h"
#include "DenominatorIsZeroException.h"

using std::cout;
using std::endl;
int main()
{
	try {
	Fraction a(0,2), b(4,5),c;
		c = !a;
		cout << c.getNumerator() << "/" << c.getDenumerator() << endl;
	}catch(DenominatorIsZeroException zeroDevision){
		cout << zeroDevision.what() << endl;
	}

	return 0;
}
