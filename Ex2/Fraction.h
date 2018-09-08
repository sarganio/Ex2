#pragma once
class Fraction
{
private:
	int _numerator;
	int _denumerator;
public:

	Fraction(int numerator = 1,int denumerator = 1);
	Fraction(const Fraction& other);
//getters
	int getNumerator()const;	
	int getDenumerator()const;
//setters
	void setNumerator(const int numerator);
	void setDenumerator(const int denumerator);
//operators
	Fraction operator+(const Fraction& other);
	/*Fraction operator-(const Fraction& other);
	Fraction operator*(const Fraction& other);
	Fraction operator/(const Fraction& other);
	Fraction operator!(const Fraction& other);*/
	~Fraction();
};

