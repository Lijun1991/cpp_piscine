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
#include "Intern.hpp"
#include <iostream>

int main(void)
{
		Bureaucrat b1 = Bureaucrat("The Bureau 1", 40);
		Intern i1;
		Form *f1;
		Form *f2;
		Form *f3;
		Form *f4;


		f1 = i1.makeForm("RobotomyRequest", "Bender");
		f2 = i1.makeForm("PresidentialPardon", "Bender");
		f3 = i1.makeForm("ShrubberyCreation", "Bender");
		std::cout << *f1;
		std::cout << *f2;
		std::cout << *f3;

		b1.signForm(*f1);

		f4 = i1.makeForm("TEST", "Bender");

	return (0);
}
