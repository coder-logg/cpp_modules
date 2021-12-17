#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int	number;
	static const int fraction_bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& other);
	explicit Fixed(const int rawBits);
	explicit Fixed(const float rawBits);
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(const int rawBits);
	static int getFractionBits(void);
	Fixed & operator=(const Fixed &other);
	bool operator<(const Fixed &rhs) const;
	bool operator>(const Fixed &rhs) const;
	Fixed operator+(const Fixed &rhs) const;
	Fixed operator-(const Fixed &rhs) const;
	Fixed operator*(const Fixed &rhs) const;
	Fixed operator/(const Fixed &rhs) const;
	bool operator<=(const Fixed &rhs) const;
	bool operator>=(const Fixed &rhs) const;
	bool operator==(const Fixed &rhs) const;
	bool operator!=(const Fixed &rhs) const;
	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);
	static Fixed max(const Fixed &n1, const Fixed &n2);
	static Fixed min(const Fixed &n1, const Fixed &n2);
};
std::ostream & operator<<(std::ostream &os, const Fixed &fx);

#endif //FIXED_HPP
