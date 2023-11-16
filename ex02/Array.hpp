#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <stdexcept>

template<typename T>
class Array
{
	public :
		Array();
		Array(unsigned int n);
		Array(const Array& rhs);
		Array& operator=(const Array& rhs);
		~Array();
		
		T& operator[](int index);
		unsigned int		size() const;
		
	private :
		unsigned int		n;
		T		*elements; 
};

template<typename T>
Array<T>::Array()
{
	elements = NULL;
	n = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	elements = new T[n]();
	this->n = n;
}

template<typename T>
Array<T>::Array(const Array& rhs)
{
	elements = NULL;
	*this = rhs;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& rhs)
{
	int		i;
	
	i = -1;
	if (this == &rhs)
		return (*this);
	if (elements)
		delete[] elements;
	n = rhs.n;
	elements = new T[n];
	while (++i < n)
		elements[i] = rhs.elements[i];
	return (*this);
}

template<typename T>
T& Array<T>::operator[](int index)
{
	if (index >= n || index < 0)
		throw std::invalid_argument("invalid index");
	return elements[index];
}

template<typename T>
unsigned int		Array<T>::size() const
{
	return (n);
}

template<typename T>
Array<T>::~Array()
{
	if(elements)
		delete[] elements;
}
#endif
