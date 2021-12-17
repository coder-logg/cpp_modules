#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	explicit Point(const Fixed &x, const Fixed &y);
	Point();
	~Point();
	Point(const Point &p);
	Point & operator=(const Point &other);


};


#endif //POINT_HPP
