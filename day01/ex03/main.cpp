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

	srand((unsigned)time(0)); 
    random_integer1 = (rand()%max)+1;
    srand((unsigned)time(0)); 
    random_integer2 = (rand()%max)+1;

    std::string ramdom_name (name, random_integer1, random_integer2);
    return (ramdom_name);
}

int main()
{
	ZombieHorde zombie_horde;
	zombie_horde.announce();
}
