/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 17:03:24 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 17:03:26 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap("", 60, 60, 120, 120, 1, 60, 5, 0) {
	std::cout << "NinjaTrap, constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string Name_input) : ClapTrap(Name_input, 60, 60, 120, 120, 1, 60, 5, 0) {
	std::cout << "NinjaTrap constructor called, the name is " << Name_input << std::endl;
}

NinjaTrap::~NinjaTrap(void){
	std::cout << "NinjaTrap, destructor called" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &Scav){
	std::cout << "NinjaTrap copy constructor called" << std::endl;
	*this = Scav;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap & obj){
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

void NinjaTrap::ninjaShoebox(NinjaTrap & tar){
	std::cout << "Hey, NinjaTrap" << " say something funny !!" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & tar){
	std::cout << "Hey, FragTrap " << " say something funny !!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & tar){
	std::cout << "Hey, ScavTrap " << " say something funny !!" << std::endl;
}
