#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : number(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &other) : number(other.number){}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->number = other.number;
	return *this;
}

int Fixed::getRawBits() const { return number; }

void Fixed::setRawBits(const int rawBits) { this->number = rawBits; }

Fixed::Fixed(const int rawBits)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = rawBits << fraction_bits;
}

Fixed::Fixed(const float rawBits)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = (int)(roundf(rawBits * (1 << fraction_bits)));
}

float Fixed::toFloat() const
{
	return ((float)((float)number / (1 << fraction_bits)));
}

std::ostream& operator<<(std::ostream &os, const Fixed &fx)
{
	return (os << (float)(((float)fx.getRawBits()) / (1 << Fixed::getFractionBits())));
}

int Fixed::toInt() const
{
	return (number >> fraction_bits);
}

int Fixed::getFractionBits() { return fraction_bits; }

bool Fixed::operator==(const Fixed &rhs) const { return number == rhs.number; }

bool Fixed::operator!=(const Fixed &rhs) const { return rhs.number != number; }

bool Fixed::operator<(const Fixed &rhs) const { return number < rhs.number; }

bool Fixed::operator>(const Fixed &rhs) const
{
	return rhs.getRawBits() > this->number;
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return rhs.getRawBits() <= this->number;
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return rhs.getRawBits() >= this->number;
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	Fixed res;
	res.setRawBits(rhs.getRawBits() + number);
	return res;
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed res;
	long l;

	l = ((long)number * (long)rhs.getRawBits()) >> fraction_bits; // q16
	res.setRawBits((int)l); //q8
	return res;
}

Fixed Fixed::operator/(const Fixed &rhs) const
{

	return Fixed();
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return Fixed();
}
