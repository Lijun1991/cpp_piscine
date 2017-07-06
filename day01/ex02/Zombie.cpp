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

	std::string new_name (name);
}

void	Zombie::announce(void){
	// std::cout << new_name << std::endl;
	std::cout << "<" << this->new_name << "(" << this->type << ")> Braiiiiiiinnnssss..." 
	<< std::endl;
}
