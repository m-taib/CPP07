#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template<typename T>
void	display(T& value)
{
	std::cout << " value : " << value << std::endl;
}

template<typename T>
void	iter(T* ptr, int len, void (*f)(T&))
{
	int		i;

	i = -1;
	while (++i < len)
		f(ptr[i]);
}

#endif
