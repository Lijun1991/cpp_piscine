/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:33:50 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 12:33:52 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(void)
{
	ZombieEvent zombie_event;
	Zombie* newZom;
	Zombie zombie1(randomChump());
	zombie1.announce();
	newZom = zombie_event.newZombie(randomChump());
	newZom->announce();
	// std::cout << randomChump() << std::endl;
	zombie_event.setZombieType("runner");

	std::cout << "created zombie1 and 2 with radome name" << std::endl;
	std::cout << "destroy..." << std::endl;

	delete newZom;
	return 0;
}
