#include "pch.h"
#include "GeneralErrorException.h"


GeneralErrorException::GeneralErrorException()
{
}
const char* GeneralErrorException::what() const throw(){
	return "Something went wrong..";
}

GeneralErrorException::~GeneralErrorException()
{
}
