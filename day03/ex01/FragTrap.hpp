/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:59:49 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 13:59:52 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap {
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

	void vaulthunter_dot_exe(std::string const & target);
public:
	FragTrap();
	FragTrap(const std::string Name_input);
	~FragTrap(void);
	FragTrap(const FragTrap &frag);
	FragTrap & operator=(const FragTrap & obj);

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	static char attacks[6][20];

};

#endif
