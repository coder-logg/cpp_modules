#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>

template<typename T>
class Array
{
private:
	unsigned _size;
	T *_arr;
public:
	explicit Array(unsigned int size);
	Array();
	virtual ~Array();
	Array(const Array &other);
	Array &operator= (const Array &other);
	T &operator[](const unsigned int index);
	unsigned int size() const;
};

template<typename T>
Array<T>::Array(unsigned int size) : _size(size), _arr(new T[_size]())
{}

template<typename T>
Array<T>::Array() : _size(0), _arr(nullptr)
{}

template<typename T>
T &Array<T>::operator[](const unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Out of range: index greater than the size of the array was used.");
	return _arr[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return _size;
}


template<typename T>
Array<T>::Array(const Array &other)
{
	*this = other;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
	delete [] _arr;
	_size = other._size;
	_arr = new T[other._size]();
	for (size_t i = 0; i < _size; i++)
		_arr[i] = other._arr[i];
	return *this;
}

template<typename T>
Array<T>::~Array()
{
	delete [] _arr;
}


#endif //ARRAY_HPP
