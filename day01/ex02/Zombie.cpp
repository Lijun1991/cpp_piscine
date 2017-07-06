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
	this->type = "walker";
	this->new_name = name ;
}

void	Zombie::announce(void){
	std::cout << "<" << this->new_name << "(" << this->type << ")> Braiiiiiiinnnssss..." 
	<< std::endl;
}
