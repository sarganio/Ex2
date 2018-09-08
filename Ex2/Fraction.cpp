#include "pch.h"
#include "Fraction.h"


Fraction::Fraction(int numerator,int denumerator){
	_numerator = numerator;
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
//Fraction operator*(const Fraction& other);
//Fraction operator/(const Fraction& other);
//Fraction operator!(const Fraction& other);


Fraction::~Fraction()
{
}
