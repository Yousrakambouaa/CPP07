/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 00:31:58 by ykamboua          #+#    #+#             */
/*   Updated: 2025/10/16 01:52:33 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "iter.hpp"


template<typename T, int N>
void addElements(T &arrElment)
{
	arrElment = i + 1;
}

template<typename T, int N>
void printElements(T &arrElment)
{
	std::cout << arrElment << std::endl;
}

int main()
{
	int arr[7];

    std::cout << "-------------: " << std::endl;
	iter(arr, 7, printElements);
	iter(arr, 7, addElements);
    std::cout << "-------------: " << std::endl;
	iter(arr, 7, printElements);

}
 