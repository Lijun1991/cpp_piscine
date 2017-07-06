/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:09:26 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 11:09:29 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	ponyOnTheHeap(int height){
	int price = 0;
	Pony *pony1 = NULL;
	if (!(pony1 = new Pony[4]))
		std::cout << "Error: out of memory" << std::endl;
	price = pony1->get_price(height);
	delete [] pony1;
	return (price);
}

int	ponyOnTheStack(int height){
	Pony pony2;
	int price = 0;
	price = pony2.get_price(height);
	return (price);
}

int Pony::Price1 = 500;
int Pony::Price2 = 1000;

int Pony::get_price(int height){
	if (height < 4)
		return (Price1);
	if (height > 4)
		return (Price2);
	return (0);
}
