/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:22:46 by lwang             #+#    #+#             */
/*   Updated: 2017/07/10 12:22:47 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>


int main(void)
{
	Bureaucrat Burea("name1", 120);
	Bureaucrat Burea_cpy1(Burea);

	try {
		std::cout << Burea_cpy1;
		std::cout << "increase : ";
		Burea_cpy1.increment_grade(20);
		std::cout << Burea_cpy1;
		std::cout << "decrease : ";
		Burea_cpy1.decrement_grade(150);
		std::cout << Burea_cpy1;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	return (0);
}
