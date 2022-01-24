#include "Converter.hpp"
#include <sstream>
#include <cmath>

Converter::Converter(const std::string &input)
	: _int(0), _float(0), _double(0), _ch(0), _str(input)
{
	convert();
}

Converter::Converter(const Converter &other)
	: _int(other._int), _float(other._float), _double(other._double), _ch(other._ch), _str(other._str), _isNan(other._isNan)
{}

bool isnumber(std::string const &str)
{
	bool success = true;
	for (int i = 0; i < static_cast<int>(str.size()); i++)
	{
		if (i == 0)
		{
			if (!(((str[i] == '+' || str[i] == '-') && str.length() > 1) || isdigit(str[i])))
				success &= false;
			continue;
		}
		if (!(isdigit(str[i]) || str[i] == '.' || (str[i] == 'f' && i == static_cast<int>(str.length() - 1) && str.length() > 2)))
			success &= false;
	}
	return success;
}

void Converter::convert()
{
	if (isnumber(_str))
	{
		_double = std::strtod(_str.c_str(), nullptr);
		_float = static_cast<float>(_double);
		_int = static_cast<int>(_double);
		if (_int > 0 && _int <= 127)
			_ch = static_cast<char>(_int);
		else
			_ch = -1;
	}
	else if (_str.length() == 1)
    {
        _ch = _str[0];
        _double = static_cast<double>(_ch);
        _float = static_cast<float>(_double);
        _int = static_cast<int>(_double);
    }
	else if (_str == "-inf" || _str == "+inf" || _str == "nan" || _str == "-inff"
					|| _str == "+inff" || _str == "nanf")
		_isNan = true;
	else
		throw std::string("ERROR: Invalid input data");
}

Converter &Converter::operator=(const Converter &other)
{
	_double = other._double;
	_int = other._int;
	_ch = other._ch;
	_float = other._float;
	_isNan = other._isNan;
	return *this;
}

int Converter::toInt() const
{
	return _int;
}

float Converter::toFloat() const
{
	return _float;
}

double Converter::toDouble() const
{
	return _double;
}

char Converter::toChar() const
{
	return _ch;
}

bool Converter::getIsNan() const
{
	return _isNan;
}

const std::string &Converter::getStr() const
{
	return _str;
}

std::ostream &operator<<(std::ostream &os, const Converter &converter)
{
	if (converter.toChar() > 0 && converter.toChar() < 32)
		os << "char: non displayable" << std::endl;
	else if (isprint(converter.toChar()))
		os << "char: '" << converter.toChar() << "'" << std::endl;
	else if (converter.getIsNan() || converter.toChar() == -1)
		os << "char: impossible" << std::endl;

	if (converter.toInt() < INT_MIN || converter.toInt() > INT_MAX || converter.getIsNan())
		os << "int: impossible" << std::endl;
	else
		os << "int: " << converter.toInt() << std::endl;

	os.precision(3);
	os.setf(std::ios::fixed);
	if (converter.getIsNan())
	{
		std::string str = converter.getStr();
		if (str[0] == '+' || str[0] == '-')
			str = str.substr(1, str.length());
		if (str[str.length() - 1] == 'f')
		{
			os << "float: " << str << std::endl;
			os << "double: " << str.substr(0, str.length() - 1);
		}
		else
		{
			os << "float: " << str + 'f' << std::endl;
			os << "double: " << str;
		}
	}
	else if (converter.toFloat() - converter.toInt() == 0)
	{
		os << "float: " << converter.toFloat() << "f" << std::endl;
		os << "double: " << converter.toDouble();
	}
	else
	{
		os << "float: "  << converter.toFloat() << "f" << std::endl;
		os << "double: " << converter.toDouble();
	}
	return os;
}
