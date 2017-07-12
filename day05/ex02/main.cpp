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

	try{
		Burea1.signForm(Shrubbery);
		Burea1.executeForm(Shrubbery);
		Shrubbery.execute(Burea1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// std::cout << std::endl << "Shrubbery form" << std::endl;
	// Form *form0 = new ShrubberyCreationForm("Home");
	// try
	// {
	// 	std::cout << *form0 << std::endl;
	// 	chief.executeForm(*form0);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// delete form0;

	// std::cout << std::endl << "Robotomy form" << std::endl;
	// Form *form1 = new RobotomyRequestForm("Arthur Dent");
	// try
	// {
	// 	std::cout << *form1 << std::endl;
	// 	chief.signForm(*form1);
	// 	std::cout << *form1 << std::endl;
	// 	chief.executeForm(*form1);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// delete form1;

	// std::cout << std::endl << "Presidential Pardon form" << std::endl;
	// Form *form2 = new PresidentialPardonForm("Ford Prefect");
	// try
	// {
	// 	std::cout << *form2 << std::endl;
	// 	chief.signForm(*form2);
	// 	std::cout << *form2 << std::endl;
	// 	chief.executeForm(*form2);
	// 	peon.executeForm(*form2);
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// delete form2;

	// return (0);
}
