/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 18:47:35 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 18:47:37 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

std::string generate_random(int max)
{
	std::string name ("abcdefghijklmnop");
	int random_integer1;
	int random_integer2;

    random_integer1 = (rand()%max)+1;
    random_integer2 = (rand()%max)+1;

    std::string ramdom_name (name, random_integer1, random_integer2);
    return (ramdom_name);
}

/*change integer N to generate differnt amount of Zombies*/

int main()
{
	srand((unsigned)time(0)); 
	ZombieHorde zombie_horde(10);
	zombie_horde.announce();
}
