/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:01:45 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 19:01:47 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char str[17] = "HI THIS IS BRAIN";

char& show(int i){
	return (str[i]);
}

int main(void)
{
	char *s = str;

	for (int i = 0; i < 17; i++){
		std::cout << s[i];
	}
	std::cout << std::endl;

	for (int i = 0; i < 17; i++){
		std::cout << show(i);
	}
	std::cout << std::endl;
	
	return 0;
}
