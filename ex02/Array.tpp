/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:24:41 by ykamboua          #+#    #+#             */
/*   Updated: 2025/10/20 19:23:16 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	_size = 0;
	_arr = nullptr;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	_arr = new[n];
	
}

template<typename T>
Array<T>::Array(Array& other)
{
	if(*this != *Array)
	{
		_size = other._size;
		for(int i = 0 ; i < other._size; i++)
			_arr[i] = other._arr[i];
	}
	return (*this);
}

template<typename T>
Array& Array<T>::operator=(Array& other)
{
	if(*this != *Array)
	{
		_size = other._size;
		for(int i = 0 ; i < other._size; i++)
			_arr[i] = other._arr[i];
	}
}

template<typename T>
Array::~Array()
{
}