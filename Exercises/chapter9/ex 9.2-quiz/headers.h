#pragma once

class Fraction
{
private:
	int m_num;
	int m_den;

public:
	Fraction(int num,int den);
	int gcd(int a, int b);
	void print();
	// add Cents + Cents using a friend function
	friend Fraction operator*(const Fraction &f1, const int f2);
	friend Fraction operator*(const int f1, const Fraction &f2);
	friend Fraction operator*(const Fraction &f1, const Fraction &f2);
	// int getCents() const;
};
