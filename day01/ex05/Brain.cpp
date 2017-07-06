/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:35:20 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 19:35:22 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>
#include <string>

//stringstream http://www.dreamincode.net/forums/topic/95826-stringstream-tutorial/

std::string Brain::identify(void) const {
	std::stringstream ss;
	ss << (const void*)(this); 
	std::string address = "0x" + ss.str(); 

	return (address);
}