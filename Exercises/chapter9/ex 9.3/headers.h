#pragma once
#include <iostream>

class Fraction
{
private:
	int m_num;
	int m_den;

public:
	Fraction(int num=1,int den=1);
	int gcd(int a, int b);
	void print();

	void reduce();

	// add Cents + Cents using a friend function
	friend Fraction operator*(const Fraction &f1, const int f2);
	friend Fraction operator*(const int f1, const Fraction &f2);
	friend Fraction operator*(const Fraction &f1, const Fraction &f2);
	// int getCents() const;
	friend std::ostream& operator<<(std::ostream &out,  const Fraction &f1);
	friend std::istream& operator>>(std::istream &in, Fraction &fraction);

};

// std::istream& operator>>(std::istream &in,  Fraction &fraction);
// std::ostream& operator<<(std::ostream &out, Fraction &f1);
