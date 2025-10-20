/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:26:26 by ykamboua          #+#    #+#             */
/*   Updated: 2025/10/20 21:22:36 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

template<typename T>
class Array
{
	private:
		unsigned int _size;
		T * _arr;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();
		
		T& operator[](unsigned int i);
		const T& operator[](unsigned int i) const;
		unsigned int size() const;
};


