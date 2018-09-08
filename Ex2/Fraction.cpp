#include "pch.h"
#include "Fraction.h"
#include "DenominatorIsZeroException.h"


Fraction::Fraction(int numerator,int denumerator){
	_numerator = numerator;
	if (!denumerator) {
		DenominatorIsZeroException zeroDevision;
		throw zeroDevision;
	}
	_denumerator = denumerator;

}
Fraction::Fraction(const Fraction& other):_numerator(other._numerator),_denumerator(other._denumerator) {
}
int Fraction::getNumerator()const	{
	return this->_numerator;
}
int Fraction::getDenumerator()const {
	return this->_denumerator;
}
void Fraction::setNumerator(const int numerator) {
	this->_numerator = numerator;
}
void Fraction::setDenumerator(const int denumerator) {
	if (!denumerator) {
		DenominatorIsZeroException zeroDevision;
		throw zeroDevision;
	}
	this->_denumerator = denumerator;
}
Fraction Fraction::operator+(const Fraction& other) {
	Fraction ans;
	ans._numerator = this->_numerator*other._denumerator + this->_denumerator*other._numerator;
	ans._denumerator = this->_denumerator*other._denumerator;
	return ans;
}
Fraction Fraction::operator-(const Fraction& other) {//a+(-b)
	Fraction conjugated = other;
	conjugated._numerator *= -1;
	return *this + conjugated;

}
Fraction Fraction::operator*(const Fraction& other) {
	Fraction ans;
	ans._numerator = this->_numerator*other._numerator;
	ans._denumerator = this->_denumerator*other._denumerator;
	return ans;
}
Fraction Fraction::operator/(const Fraction& other) {//(a/b)/(c/d)=>(a/b)*(d/c))
	if (!other._numerator) {
		DenominatorIsZeroException zeroDevision;
		throw zeroDevision;
	}
	Fraction ans = (*this)*!other;
	return ans;

}
Fraction Fraction::operator!()const {
	Fraction ans;
	if (!this->_numerator) {
		DenominatorIsZeroException zeroDevision;
		throw zeroDevision;
	}
	ans._denumerator = this->_numerator;
	ans._numerator = this->_denumerator;
	return ans;
}


Fraction::~Fraction()
{
}
