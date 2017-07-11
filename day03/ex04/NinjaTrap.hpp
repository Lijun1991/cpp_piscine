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
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"


class NinjaTrap : public ClapTrap {
public:
	NinjaTrap();
	NinjaTrap(const std::string Name_input);
	NinjaTrap(const NinjaTrap &frag);
	NinjaTrap & operator=(const NinjaTrap & obj);
	~NinjaTrap();

	void ninjaShoebox(NinjaTrap & tar);
	void ninjaShoebox(FragTrap & tar);
	void ninjaShoebox(ScavTrap & tar);

};

#endif
