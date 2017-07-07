/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 20:51:20 by lwang             #+#    #+#             */
/*   Updated: 2017/07/06 20:51:22 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int bits;

public:
	Fixed();
	Fixed(const int nbr);
	Fixed(const float nbr);
	Fixed(const Fixed &obj);
	~Fixed();
	void operator = (const Fixed &f);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif


Fixed::Fixed(const int nbr){
	std::cout << "Int constructor called" << std::endl;
	value = 
}

Fixed::Fixed(const float nbr){
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const {

}

int Fixed::toInt( void ) const {

}