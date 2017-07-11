/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:52:47 by lwang             #+#    #+#             */
/*   Updated: 2017/07/07 13:52:50 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string Name_input);
	ScavTrap(const ScavTrap &frag);
	ScavTrap & operator=(const ScavTrap & obj);
	~ScavTrap();
	void challengeNewcomer();
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
};

#endif

