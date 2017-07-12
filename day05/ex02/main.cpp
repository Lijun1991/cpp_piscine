/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:57:07 by lwang             #+#    #+#             */
/*   Updated: 2017/07/11 16:57:09 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat Burea1("Burea_1name", 130);
	ShrubberyCreationForm Shrubbery("Shrub");
	// Form * form = &Shrubbery;

	try{
		Burea1.signForm(Shrubbery);
		Burea1.executeForm(Shrubbery);
		Shrubbery.execute(Burea1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}