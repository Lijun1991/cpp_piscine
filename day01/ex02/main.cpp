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

int main(void)
{
	randomChump(1);
	randomChump(2);
	return 0;
}
