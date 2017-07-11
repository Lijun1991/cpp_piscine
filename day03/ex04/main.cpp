/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 21:20:29 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 21:20:31 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void){

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
	ScavTrap Scav("hello");
	Clap.rangedAttack("123");
	Scav.rangedAttack("456");

	std::cout << std::endl << "NinjaTrap is doing somthing fun here !" << std::endl;
	NinjaTrap nin("Ninjia");
	NinjaTrap nin2(nin);

	nin.rangedAttack("Dr Zed");
	nin.meleeAttack("Dr Zed");
	nin.takeDamage(20);
	nin.takeDamage(100);
	nin.beRepaired(30);
	nin.beRepaired(80);

	F1.rangedAttack("ttt");
	Scav.rangedAttack("ttt");
	nin.rangedAttack("ttt");

	nin.ninjaShoebox(F1);
	nin.ninjaShoebox(Scav);
	nin.ninjaShoebox(nin);
}