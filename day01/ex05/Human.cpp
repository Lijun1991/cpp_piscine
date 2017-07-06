/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:35:44 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 19:35:46 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void){
}

Human::~Human(void){
}

std::string Human::identify(void) const{
	return this->a_brain.identify();
}

Brain const &Human::getBrain(void) const{
	return this->a_brain;
}
