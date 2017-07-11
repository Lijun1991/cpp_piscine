/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:52:38 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 13:52:40 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("", 100, 100, 50, 50, 1, 20, 15, 3) {
	std::cout << "ScavTrap, constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string Name_input) : ClapTrap(Name_input, 100, 100, 50, 50, 1, 20, 15, 3) {
	std::cout << "ScavTrap constructor called, the name is " << Name_input << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap, destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &Scav){
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = Scav;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & obj){
	std::cout << "Assignation" << std::endl;
	this->Hit_points = obj.Hit_points;
	this->Max_hit_points = obj.Max_hit_points;
	this->Energy_points = obj.Energy_points;
	this->Max_energy_points = obj.Max_energy_points;
	this->Level = obj.Level;
	this->Melee_attack_damage = obj.Melee_attack_damage;
	this->Ranged_attack_damage = obj.Ranged_attack_damage;
	this->Armor_damage_reduction = obj.Armor_damage_reduction;
	this->Name = obj.Name;
	return (*this);
}

void ScavTrap::rangedAttack(std::string const & target){
	std::cout << "ScavTrap " << this->Name << " attacks " << target 
	<< " at range, causing " << this->Ranged_attack_damage << " points of damage !"
	<< std::endl;
}

void ScavTrap::meleeAttack(std::string const & target){
	std::cout << "ScavTrap " << this->Name << " attacks " << target 
	<< " at melee, causing " << this->Melee_attack_damage << " points of damage !"
	<< std::endl;
}


void ScavTrap::challengeNewcomer(void){
	char challenges[6][26] = {"funny challenge 1...", "funny challenge 2...", 
	"funny challenge 3...", "funny challenge 4...", "funny challenge 5..."};
	int random_integer1 = (rand()%4)+1;
	std::cout << "ScavTrap" << this->Name << " start " << challenges[random_integer1]
	<< std::endl;
}
