#include "pch.h"
#include "DenominatorIsZeroException.h"


DenominatorIsZeroException::DenominatorIsZeroException()
{
}
const char * DenominatorIsZeroException::what() const throw () {
	return "Zero devision!";
}


DenominatorIsZeroException::~DenominatorIsZeroException()
{
}
