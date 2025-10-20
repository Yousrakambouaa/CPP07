/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:26:26 by ykamboua          #+#    #+#             */
/*   Updated: 2025/10/20 18:44:54 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template<typename T>
class Array
{
	private:
		unsigned int _size;
		T * _arr;
	public:
		Array();
		Array(unsigned int n);
		Array(Array& other);
		Array& operator=(Array& other);
		~Array();
};


