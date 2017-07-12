/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:33:35 by lwang             #+#    #+#             */
/*   Updated: 2017/07/11 09:33:37 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : 
Form("Shrubbery Form", 25, 5, "empty"){
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target_input) : 
Form("Shrubbery Form", 25, 5, target_input){
	std::cout << "PresidentialPardonForm constructor called, the name is " << target_input << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &frag) : 
Form("Shrubbery Form", 25, 5, "empty"){
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = frag;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & obj){
	std::cout << "Assignation" << std::endl;
	Form::operator=(obj);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	Form::check_grade_to_exe(executor.getGrade());
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}


