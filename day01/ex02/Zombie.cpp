/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:32:44 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 12:32:46 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	std::string type ("walker");
	// std::cout << type << std::endl;
	std::string new_name (name);
	// std::cout << new_name << std::endl;
}

void	Zombie::announce(void){
	std::cout << "<" << new_name << "(" << type << ")> Braiiiiiiinnnssss..." 
	<< std::endl;
}
