#pragma once
#include <exception>
using std::exception;
class DenominatorIsZeroException:public exception
{
public:
	DenominatorIsZeroException();
	virtual const char * what() const throw ();
	~DenominatorIsZeroException();
};

