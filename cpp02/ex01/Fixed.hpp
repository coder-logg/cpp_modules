#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int	number; // 107.688
	static const int fraction_bits = 8;

public:
	Fixed();
	Fixed(const Fixed& other);
	explicit Fixed(const int rawBits);
	explicit Fixed(const float rawBits);
	~Fixed();
	Fixed & operator=(const Fixed &other);
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits() const;
	void setRawBits(const int rawBits);
	static int getFractionBits();
};
std::ostream & operator<<(std::ostream &os, const Fixed &fx);

#endif //FIXED_HPP
