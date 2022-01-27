#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <string>

class span
{
private:
	std::vector<int> _storage;
	unsigned _size;
	unsigned _elmCounter;

public:
	span();
	explicit span(unsigned int size);
	virtual ~span(){};
	void addNumber(const int &nbr);
	int shortestSpan() const;
	int longestSpan() const;

    class SpanRangeExeption : public std::exception
    {
    private:
        std::string _errmsg;
    public:
        SpanRangeExeption(const std::string &errmsg);
        virtual const char *what() const throw();
        ~SpanRangeExeption() throw() {};
    };

};

#endif //SPAN_HPP
