#include "headers.h"
#include <iostream>
Fraction::Fraction(int num, int den): m_num(num), m_den(den){
	m_num = num;
 	m_den = den;
};

int Fraction::gcd(int a, int b) {
		return b == 0 ? a : gcd(b, a % b);
}

void Fraction::print(){
	int gcd = Fraction::gcd(m_num, m_den);
	m_num /= gcd;
	m_den /= gcd;
	std::cout<<m_num<<"/"<<m_den<<std::endl;
}
void Fraction::reduce()
{
	int gcd = Fraction::gcd(m_num, m_den);
	m_num /= gcd;
	m_den /= gcd;
}

Fraction operator*(const Fraction &f1, const int f2){
	return Fraction(f1.m_num*f2, f1.m_den);
}
Fraction operator*( const int f1, const Fraction &f2){
	return Fraction(f1 * f2.m_num, f2.m_den);
}
Fraction operator*(const Fraction &f1, const Fraction &f2){
	return Fraction(f1.m_num*f2.m_num, f1.m_den*f2.m_den);
}

// int Cents::getCents() const { return m_cents; };
// // note: this function is not a member function!
// Cents operator+(const Cents &c1, const Cents &c2)
// {
// 	// use the Cents constructor and operator+(int, int)
// 	// we can access m_cents directly because this is a friend function
// 	return Cents(c1.m_cents + c2.m_cents);
// };

std::ostream& operator<<(std::ostream &out, const Fraction &f1)
{
	out << f1.m_num << "/" << f1.m_den;
	return out;
}

std::istream& operator>>(std::istream &in,  Fraction &fraction)
{
	char c;

	// Overwrite the values of f1
	in >> fraction.m_num;
	in >> c; // ignore the '/' separator
	in >> fraction.m_den;

	// Since we overwrite the existing f1, we need to reduce again
	fraction.reduce();

	return in;
}
