/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 14:59:38 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 14:59:39 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>


class ClapTrap {
public:
	ClapTrap();
	ClapTrap(const ClapTrap &frag);
	ClapTrap & operator=(const ClapTrap & obj);
	~ClapTrap();

	std::string Name;
	int Hit_points;
	int Max_hit_points;
	int Energy_points;
	int Max_energy_points;
	int Level;
	int Melee_attack_damage;
	int Ranged_attack_damage;
	int Armor_damage_reduction;

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	virtual void rangedAttack(std::string const & target);
	virtual void meleeAttack(std::string const & target);
};

#endif