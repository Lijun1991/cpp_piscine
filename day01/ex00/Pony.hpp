/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 11:10:09 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 11:10:10 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {
	public:
		static int Price1;
		static int Price2;
		static int get_price(int height);

};

int	ponyOnTheHeap(int height);
int	ponyOnTheStack(int height);

#endif