/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:59:58 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 14:00:00 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
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

	return (0);
}
