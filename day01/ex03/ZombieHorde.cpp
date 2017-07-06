/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:47:09 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 18:47:12 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int ZombieHorde::Count;

ZombieHorde::ZombieHorde(int N){
	this->array = new Zombie[N];
	Count = N;
}

ZombieHorde::~ZombieHorde(){
	delete [] this->array;
}

void	ZombieHorde::announce(void){
	for (int i = 0; i < Count; i++){
		array[i].announce();
	}
}

