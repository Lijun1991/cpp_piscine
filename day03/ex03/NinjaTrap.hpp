/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 17:03:33 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 17:03:35 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>


class NinjaTrap {
public:
	NinjaTrap();
	NinjaTrap(const std::string Name_input);
	NinjaTrap(const NinjaTrap &frag);
	NinjaTrap & operator=(const NinjaTrap & obj);
	~NinjaTrap();

	void ninjaShoebox();

private:
	std::string Name;
	int Hit_points;
	int Max_hit_points;
	int Energy_points;
	int Max_energy_points;
	int Level;
	int Melee_attack_damage;
	int Ranged_attack_damage;
	int Armor_damage_reduction;
};

#endif

NinjaTrap::NinjaTrap(void): 
	Hit_points (60), Max_hit_points (60), Energy_points (120), 
	Max_energy_points (120), Level (1), Melee_attack_damage (60), 
	Ranged_attack_damage (5), Armor_damage_reduction (0){
	std::cout << "NinjaTrap, constructor called" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string Name_input)
	: Name (Name_input), Hit_points (60), Max_hit_points (60), Energy_points (120), 
	Max_energy_points (120), Level (1), Melee_attack_damage (60), 
	Ranged_attack_damage (5), Armor_damage_reduction (0){
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

// void ScavTrap::rangedAttack(std::string const & target){
// 	std::cout << "ScavTrap " << this->Name << " attacks " << target 
// 	<< " at range, causing " << this->Ranged_attack_damage << " points of damage !"
// 	<< std::endl;
// }

// void ScavTrap::meleeAttack(std::string const & target){
// 	std::cout << "ScavTrap " << this->Name << " attacks " << target 
// 	<< " at melee, causing " << this->Melee_attack_damage << " points of damage !"
// 	<< std::endl;
// }


// void ScavTrap::challengeNewcomer(void){
// 	char challenges[6][26] = {"funny challenge 1...", "funny challenge 2...", 
// 	"funny challenge 3...", "funny challenge 4...", "funny challenge 5..."};
// 	int random_integer1 = (rand()%4)+1;
// 	std::cout << "ScavTrap" << this->Name << " start " << challenges[random_integer1]
// 	<< std::endl;
// }
