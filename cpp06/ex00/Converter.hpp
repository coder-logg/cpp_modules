#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <string>
#include <iostream>

class Converter
{
private:
	int _int;
	float _float;
	double _double;
	char _ch;
	std::string _str;
	bool _isNan;
	void convert();
	Converter(){};

public:
	explicit Converter(const std::string &input);
	Converter(const Converter &other);
	Converter &operator=(const Converter &other);
    ~Converter(){};
	int toInt() const;
	float toFloat() const;
	double toDouble() const;
	char toChar() const;
	const std::string &getStr() const;
	bool getIsNan() const;
};
std::ostream &operator<<(std::ostream &os, const Converter &converter);

#endif //CONVERTER_HPP
