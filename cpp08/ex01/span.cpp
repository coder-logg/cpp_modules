#include "span.hpp"
#include <exception>
#include <sstream>
#include <iostream>

span::span(unsigned int size) : _size(size), _elmCounter(0)
{}

span::span() : _size(0), _elmCounter(0)
{}

template <typename T>
std::string itoa( T Number )
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}

void span::addNumber(const int &nbr)
{
	if (_elmCounter >= _size)
	    throw std::length_error("You can't add more than " + itoa(nbr) + " numbers");
	_storage.push_back(nbr);
	_elmCounter++;
}

int span::shortestSpan() const
{
    if (_elmCounter < 2)
        throw SpanRangeExeption("span::shortestSpan() : not enough elements for this operation");
    std::vector<int> storageCopy(_storage);
    if (!std::is_sorted(storageCopy.begin(), storageCopy.end()))
        std::sort(storageCopy.begin(), storageCopy.end());
    int shortestDistance = std::abs(storageCopy[1] - storageCopy[0]);
    for (unsigned i = 0; i < _elmCounter - 1; i+=2)
    {
        if (shortestDistance > std::abs(storageCopy[i] - storageCopy[i + 1]))
            shortestDistance = std::abs(storageCopy[i] - storageCopy[i + 1]);
    }
    return shortestDistance;
}

int span::longestSpan() const
{
    if (_elmCounter < 2)
        throw SpanRangeExeption("span::longestSpan() : not enough elements for this operation");
    int max = *(std::max_element(_storage.begin(), _storage.end()));
    int min = *(std::min_element(_storage.begin(), _storage.end()));
    return (std::abs(max - min));
}

const char *span::SpanRangeExeption::what() const throw()
{
    return _errmsg.c_str();
}

span::SpanRangeExeption::SpanRangeExeption(const std::string &errmsg) : _errmsg(errmsg)
{}
