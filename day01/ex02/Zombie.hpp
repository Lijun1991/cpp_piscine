/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:32:58 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 12:33:00 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include "ZombieEvent.hpp"

class Zombie {
	public:
		Zombie(std::string name);
		void announce();
	private:
		std::string type;
		std::string new_name;
};

#endif
