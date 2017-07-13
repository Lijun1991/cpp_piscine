/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 09:12:15 by lwang             #+#    #+#             */
/*   Updated: 2017/07/13 09:12:16 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void iter(T *arr, size_t length, void (*func)(T const &)){ 
    if (!arr)
    	return ;
    for (size_t i = 0; i < length; i++)
    {
    	func(arr[i]);
    }
}

void print_String(std::string const str)
{
	std::cout << str << std::endl;
}

int main( void ) 
{ 
	std::string array_string[] = {"hello", "hello1", "hello2", "hello3", "hello4"};
	iter(array_string, 5, print_String);
    return 0; 
}
