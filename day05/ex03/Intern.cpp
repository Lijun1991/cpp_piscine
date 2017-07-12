/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:17:30 by lwang             #+#    #+#             */
/*   Updated: 2017/07/11 21:17:32 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void){
	std::cout << "Intern constructor called" << std::endl;
}


Intern::Intern(const Intern &frag){
	std::cout << "Intern copy constructor called" << std::endl;
	*this = frag;
}

Intern::~Intern(void){
	std::cout << "Intern destructor called" << std::endl;
}

Intern & Intern::operator=(const Intern & obj){
	std::cout << "Assignation" << std::endl;
	(void)obj;
	return (*this);
}

Form * Intern::searchForm(std::string form_name, std::string form_target)
{
	Form * (Intern::*array_Ptr_F[3])(std::string const & target) = 
	{
	&Intern::robotomyRequest, 
	&Intern::presidentialPardon,
	&Intern::shrubberyCreation
	};

	const std::string array_form_name[] = 
	{
	"RobotomyRequest",
	"PresidentialPardon",
	"ShrubberyCreation"
	};

	for (int i = 0; i < 3; i++)
	{
		if (array_form_name[i].compare(form_name) == 0)
		{
			std::cout << "Intern creates <" << form_name << ">" << std::endl;
			return (this->*array_Ptr_F[i])(form_target);
		}
	}
	throw Intern::FormNotExist();
}

Form * Intern::makeForm(std::string form_name, std::string form_target)
{
	try
	{
		return Intern::searchForm(form_name, form_target);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return NULL;
}


Form * Intern::robotomyRequest(std::string const & target)
{
	return new RobotomyRequestForm(target);
}

Form * Intern::presidentialPardon(std::string const & target)
{
	return new PresidentialPardonForm(target);
}

Form * Intern::shrubberyCreation(std::string const & target)
{
	return new ShrubberyCreationForm(target);
}