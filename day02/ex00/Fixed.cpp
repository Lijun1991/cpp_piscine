/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:31:45 by lwang             #+#    #+#             */
/*   Updated: 2017/07/06 19:31:47 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

void Fixed::operator = (const Fixed &f){
	std::cout << "Assignation operator called" << std::endl;
	value = f.getRawBits();
};

Fixed::Fixed(void){
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void){
	setRawBits(0);
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) {
   std::cout << "Copy constructor called" << std::endl;
   value = obj.getRawBits();
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits( int const raw ){
	value = raw;
}