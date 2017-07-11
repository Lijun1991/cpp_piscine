/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:59:29 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 14:59:30 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout << "ClapTrap, constructor called" << std::endl;
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
}

ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap, the destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name_input, int v_Hit_points, int v_Max_hit_points, int v_Energy_points, 
	int v_Max_energy_points, int v_Level, int v_Melee_attack_damage, 
	int v_Ranged_attack_damage, int v_Armor_damage_reduction):
	Name (Name_input), Hit_points (v_Hit_points), Max_hit_points (v_Max_hit_points), Energy_points (v_Energy_points), 
	Max_energy_points (v_Max_energy_points), Level (v_Level), Melee_attack_damage (v_Melee_attack_damage), 
	Ranged_attack_damage (v_Ranged_attack_damage), Armor_damage_reduction (v_Armor_damage_reduction){
	std::cout << "ClapTrap parameter, constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &Clap){
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = Clap;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & obj){
	std::cout << "Assignation" << std::endl;
	return (*this);
}



void ClapTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->Name << " attacks " << target 
	<< " at range, causing " << this->Ranged_attack_damage << " points of damage !"
	<< std::endl;
}

void ClapTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP" << this->Name << " attacks " << target 
	<< " at melee, causing " << this->Melee_attack_damage << " points of damage !"
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->Name << " take damage of amount " << amount << std::endl;
	this->Hit_points -= (amount - this->Armor_damage_reduction);
	if (this->Hit_points < 0)
		this->Hit_points = 0;
	std::cout << "new Hit_points is " << this->Hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << this->Name << " be repaired of amount " << amount << std::endl;
	this->Hit_points += amount;
	if (this->Hit_points > 100)
		this->Hit_points = 100;
	std::cout << "new Hit_points is " << this->Hit_points << std::endl;
}

