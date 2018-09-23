#include "pch.h"
#include "GeneralErrorException.h"


GeneralErrorException::GeneralErrorException()
{
}
const char* GeneralErrorException::what() const throw(){
	switch (_state)
	{
	case 1:
		return "Failed during creation of fraction.";
	case 2:
		return "Failed during operator's execution";
	case 3:
		return "Value of denumetor is invalid.";
	default:
		return "Something went wrong.";
	}
}
void GeneralErrorException::setState(int state) {
	_state = state;
}

GeneralErrorException::~GeneralErrorException()
{
}
