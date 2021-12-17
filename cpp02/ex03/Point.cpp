#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(const Fixed &x, const Fixed &y) : x(x), y(y)
{}

Point::Point()
{}

Point::~Point() {}

Point::Point(const Point &p) : x(p.x), y(p.y){}

Point &Point::operator=(const Point &other)
{
	const_cast<Fixed &>(x) = p.getX();
	const_cast<Fixed &>(y) = p.getY();
	return *this;
}
