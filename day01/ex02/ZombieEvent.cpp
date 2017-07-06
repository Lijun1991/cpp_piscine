/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:33:21 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 12:33:23 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <cstdlib>

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie* newZom = new Zombie(name);
	newZom->type = new_type;
	return (newZom);
}

void	ZombieEvent::setZombieType(std::string set_type)
{
	this->new_type = set_type;
}

void randomChump(int type)
{
	if (type == 1){
		Zombie zombie1(generate_random(10));
		zombie1.announce();
	}
	if (type == 2){
		ZombieEvent zombie_event;
		Zombie* newZom;
		zombie_event.setZombieType("runner");
		newZom = zombie_event.newZombie(generate_random(6));
		newZom->announce();
		delete newZom;
	}
}