/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 15:15:44 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 15:15:46 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include "FragTrap.hpp"

int main()
{
	srand((unsigned)time(0)); 

	FragTrap F1("aaa");
	FragTrap F2(F1);
	F1.rangedAttack("bbb");
	F1.meleeAttack("bbb");
	F1.takeDamage(20);
	F1.takeDamage(100);
	F1.beRepaired(30);
	F1.beRepaired(80);

	for (int i = 0; i < 5; i ++)
		F1.vaulthunter_dot_exe("bbb");

	ScavTrap Trap("test");
	Trap.rangedAttack("attack1");
	Trap.challengeNewcomer();

	ClapTrap Clap;
	ScavTrap Scav;
	Clap.rangedAttack("123");
	Scav.rangedAttack("456");

	return (0);
}
