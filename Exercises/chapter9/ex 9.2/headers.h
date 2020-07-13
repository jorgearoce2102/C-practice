#pragma once

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents);

	// add Cents + Cents using a friend function
	friend Cents operator+(const Cents &c1, const Cents &c2);

	int getCents() const;
};
