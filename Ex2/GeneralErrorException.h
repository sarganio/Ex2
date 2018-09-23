#pragma once
#include <exception>
using std::exception;
class GeneralErrorException:public exception
{
private:
	int _state = 0;/*0.unknown failure
				1.fail during creation of a fraction
				2.fail during operator's execution*/
public:
	GeneralErrorException();
	virtual const char * what() const throw ();
	~GeneralErrorException();
	void setState(int state);
};

