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

int ZombieHorde::N = 10;

ZombieHorde::ZombieHorde(int N){
	this->array = new Zombie[N];
}

ZombieHorde::~ZombieHorde(){
	delete this->array;
}

void	ZombieHorde::announce(void){
	for (int i; i < N; i++){
		array[i].announce();
	}
}

