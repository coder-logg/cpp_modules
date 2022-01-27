#ifndef ITER_HPP
#define ITER_HPP

template <typename T> void iter(T *arr, size_t arrLen, void (*f)(T &t))
{
	for(size_t i = 0; i < arrLen; i++)
		f(arr[i]);
}

#endif //ITER_HPP
