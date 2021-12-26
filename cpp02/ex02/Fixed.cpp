#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : number(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &other) : number(other.number){}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->number = other.number;
	return *this;
}

int Fixed::getRawBits() const { return number; }

void Fixed::setRawBits(const int rawBits) { this->number = rawBits; }

Fixed::Fixed(const int rawBits) : number(rawBits << fraction_bits) {}

Fixed::Fixed(const float rawBits)
{
	this->number = (int)(roundf(rawBits * (1 << fraction_bits)));
}

float Fixed::toFloat() const
{
	return ((float)((float)number / (1 << fraction_bits)));
}

std::ostream& operator<<(std::ostream &os, const Fixed &fx) { return (os << fx.toFloat()); }

int Fixed::toInt() const { return (number >> fraction_bits); }

int Fixed::getFractionBits() { return fraction_bits; }

bool Fixed::operator==(const Fixed &rhs) const { return number == rhs.number; }

bool Fixed::operator!=(const Fixed &rhs) const { return rhs.number != number; }

bool Fixed::operator<(const Fixed &rhs) const { return number < rhs.number; }

bool Fixed::operator>(const Fixed &rhs) const { return rhs.number < this->number; }

bool Fixed::operator<=(const Fixed &rhs) const { return this->number <= rhs.number; }

bool Fixed::operator>=(const Fixed &rhs) const { return this->number >= rhs.number; }

Fixed Fixed::operator+(const Fixed &rhs) const { return Fixed(toFloat() + rhs.toFloat()); }

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed res;
	long l = ((long)number * (long)rhs.getRawBits()) >> fraction_bits;
	res.setRawBits((int)l);
	return res;
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return Fixed((toFloat() / rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const { return Fixed(toFloat() - rhs.toFloat()); }

Fixed Fixed::max(Fixed const &n1, Fixed const &n2) { return (n1 >= n2 ? n1 : n2); }

Fixed Fixed::min(Fixed const &n1, Fixed const &n2) { return (n1 <= n2 ? n1 : n2); }

Fixed &Fixed::operator++()
{
	number++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed out(*this);
	number++;
	return (out);
}

Fixed &Fixed::operator--()
{
	number--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed out(*this);
	number--;
	return (out);
}


