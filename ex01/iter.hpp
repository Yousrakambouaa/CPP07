/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 00:32:02 by ykamboua          #+#    #+#             */
/*   Updated: 2025/10/16 01:40:12 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template<typename T>
void iter(T *arr, const int N, void (*f)(T&))
{
	for(int i= 0; i < N; i++)
		f(arr[i]);
}

template<typename T>
void iter(const T *arr, const int N, void (*f)(const T&))
{
	for(int i= 0; i < N; i++)
		f(arr[i]);
}