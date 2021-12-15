#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int	number;
	static const int fraction_bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& other);
	Fixed & operator=(const Fixed &other);
	int getRawBits() const;
	void setRawBits(const int rawBits);
};


#endif //FIXED_HPP
