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
#include <stdexcept>

int main(void)
{
	Bureaucrat Burea("name1", 140);
	Bureaucrat Burea_cpy1(Burea);

	try {
		std::cout << Burea_cpy1.getName() << " bureaucrat is current at grade " << Burea_cpy1.getGrade() << std::endl;
		Burea_cpy1.increment_grade(20);
		std::cout << Burea_cpy1.getName() << " bureaucrat is current at grade " << Burea_cpy1.getGrade() << std::endl;
		Burea_cpy1.decrement_grade(150);
		std::cout << Burea_cpy1.getName() << " bureaucrat is current at grade " << Burea_cpy1.getGrade() << std::endl;
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}


	return (0);
}
