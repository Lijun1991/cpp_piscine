/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:51:10 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 13:51:11 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	srand((unsigned)time(0)); 
	
	ScavTrap Trap("test");

	Trap.rangedAttack("attack1");
	Trap.challengeNewcomer();

	return (0);
}
