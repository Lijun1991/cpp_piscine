/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:59:42 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 13:59:44 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

char FragTrap::attacks[6][20] = {"funny attack 1...", "funny attack 2...", 
	"funny attack 3...", "funny attack 4...", "funny attack 5..."};

FragTrap::FragTrap(void){
	std::cout << "FragTrap constructor called" << std::endl;
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
}

FragTrap::FragTrap(const std::string Name_input)
	: Name (Name_input) {
	std::cout << "FragTrap constructor called, the name is " << Name_input << std::endl;
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
}

FragTrap::FragTrap(const FragTrap &frag)
	: Name (frag.Name) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = frag;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & obj){
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

void FragTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP " << this->Name << " attacks " << target 
	<< " at range, causing " << this->Ranged_attack_damage << " points of damage !"
	<< std::endl;
}

void FragTrap::meleeAttack(std::string const & target){
	std::cout << "FR4G-TP" << this->Name << " attacks " << target 
	<< " at melee, causing " << this->Melee_attack_damage << " points of damage !"
	<< std::endl;
}

void FragTrap::takeDamage(unsigned int amount){
	std::cout << this->Name << " take damage of amount " << amount << std::endl;
	this->Hit_points -= (amount - this->Armor_damage_reduction);
	if (this->Hit_points < 0)
		this->Hit_points = 0;
	std::cout << "new Hit_points is " << this->Hit_points << std::endl;
}

void FragTrap::beRepaired(unsigned int amount){
	std::cout << this->Name << " be repaired of amount " << amount << std::endl;
	this->Hit_points += amount;
	if (this->Hit_points > 100)
		this->Hit_points = 100;
	std::cout << "new Hit_points is " << this->Hit_points << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target){
	int random_integer1 = (rand()%4)+1;
	std::cout << "FR4G-TP" << this->Name << " use " << attacks[random_integer1]
	<< " attack " << " costs 25 energy points  !"
	<< std::endl;
	if (this->Energy_points >= 25)
		this->Energy_points -= 25;
	std::cout << "new Energy_points is " << this->Energy_points << std::endl;
}
