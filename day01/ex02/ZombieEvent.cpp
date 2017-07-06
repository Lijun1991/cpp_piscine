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
	// (*newZom).std::string type (new_type);
	// (*newZom).std::string name (new_name);
	// announce();
	return (newZom);
}

void	ZombieEvent::setZombieType(std::string set_type)
{
	std::string type (set_type);
}

std::string randomChump(int max)
{
	std::string name ("abcdefghijklmnop");
	int random_integer1;
	int random_integer2;

	srand((unsigned)time(0)); 
    random_integer1 = (rand()%max)+1;
    srand((unsigned)time(0)); 
    random_integer2 = (rand()%max)+1;

  	// std::cout << "random" << random_integer1 << std::endl;
    std::string ramdom_name (name, random_integer1, random_integer2);
    return (ramdom_name);
}