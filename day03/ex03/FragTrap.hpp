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
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	
public:
	FragTrap();
	FragTrap(const std::string Name_input);
	~FragTrap(void);
	FragTrap(const FragTrap &frag);
	FragTrap & operator=(const FragTrap & obj);
	void vaulthunter_dot_exe(std::string const & target);

	static char attacks[6][20];

};

#endif
