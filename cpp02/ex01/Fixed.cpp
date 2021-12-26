#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : number(other.number)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->number = other.number;
	return *this;
}

int Fixed::getRawBits() const
{
	return number;
}

void Fixed::setRawBits(const int rawBits)
{
	this->number = rawBits;
}

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
	return (os << fx.toFloat());
}

int Fixed::toInt() const
{
	return (number >> fraction_bits);  // 000107
}

int Fixed::getFractionBits()
{
	return fraction_bits;
}
