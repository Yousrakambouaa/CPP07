/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 00:32:17 by ykamboua          #+#    #+#             */
/*   Updated: 2025/10/11 00:32:18 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>

template<typename T>
void	swap(T& a, T& b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(T& a, T& b)
{
	if(a < b)
		return (a);
	return (b);
}

template<typename T>
T max(T& a, T& b)
{
	if(a > b)
		return (a);
	return (b);
}