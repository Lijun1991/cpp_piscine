/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 20:51:32 by lwang             #+#    #+#             */
/*   Updated: 2017/07/06 20:51:33 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed & Fixed::operator = (const Fixed &f){
	std::cout << "Assignation operator called" << std::endl;
	this->value = f.getRawBits();
	return (*this);
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
   *this = obj;
}

int Fixed::getRawBits(void) const{
	return (value);
}

void Fixed::setRawBits( int const raw ){
	this->value = raw << this->bits;
}

void Fixed::setRawBits( float const raw ){
	float tmp = raw;
	for (int i = 0; i < this->bits; i++){
		tmp *= 2;
	}
	this->value = roundf(tmp);
}




std::ostream &	operator<<(std::ostream & out, Fixed const & i){
	out << i.toFloat();
	return (out);
}

Fixed::Fixed(const int nbr){
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(nbr);
}

Fixed::Fixed(const float nbr){
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(nbr);
}

float Fixed::toFloat( void ) const {
	float tmp = this->value;
	for (int i = 0; i < this->bits; i++){
		tmp /= 2.f;
	}
	return (tmp);
}

int Fixed::toInt( void ) const {
	return (this->value >> this->bits);
}

