/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 19:31:34 by lwang             #+#    #+#             */
/*   Updated: 2017/07/06 19:31:36 by lwang            ###   ########.fr       */
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
	Fixed(const Fixed &obj);
	~Fixed();
	void operator = (const Fixed &f);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif