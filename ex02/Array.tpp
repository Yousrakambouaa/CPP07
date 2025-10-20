/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:24:41 by ykamboua          #+#    #+#             */
/*   Updated: 2025/10/20 21:25:05 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

template<typename T>
Array<T>::Array() : _size(0), _arr(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_arr = new T[n];
	
}

template<typename T>
Array<T>::Array(const Array& other)
{
	_arr = new T[other._size];
	for(int i = 0 ; i < other._size; i++)
		_arr[i] = other._arr[i];
	_size = other._size;
}

template<typename T>
Array& Array<T>::operator=(const Array& other)
{
	if(this != &other)
	{
		delete[]_arr;
		_arr = new T[other._size];
		for(int i = 0 ; i < other._size; i++)
			_arr[i] = other._arr[i];
		_size = other._size;
	}
	return (*this);
}

template<typename T>
Array::~Array()
{
	delete[] _arr;
}

template<typename T>
T& Array<T>::operator[](unsigned int i)
{
	if(i >= _size)
		throw std::out_of_range("index is out of raange!!");
	return (_arr[i]);
	
}

template<typename T>
const T& Array<T>::operator[](unsigned int i) const
{
	if(i >= _size)
		throw std::out_of_range("index is out of raange!!");
	return (_arr[i]);
	
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}