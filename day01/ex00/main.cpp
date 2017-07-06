/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:10:16 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 11:10:18 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main(void)
{
	int price_pony1;
	int price_pony2;
	int height_pony1 = 7;
	int height_pony2 = 3;

	price_pony1 = ponyOnTheHeap(height_pony1);
	price_pony2 = ponyOnTheStack(height_pony2);

	if (price_pony1 > price_pony2)
		std::cout << "pony1 is more expensive" << std::endl;
	else
		std::cout << "pony2 is more expensive or they are the same price" << std::endl;
	return 0;
}
