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
	ClapTrap Clap;
	ScavTrap Scav;

	Clap.rangedAttack("123");
	Scav.rangedAttack("456");

	return (0);
}
