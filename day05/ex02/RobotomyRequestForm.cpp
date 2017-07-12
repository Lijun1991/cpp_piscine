/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:33:11 by lwang             #+#    #+#             */
/*   Updated: 2017/07/11 09:33:13 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : 
Form("Shrubbery Form", 72, 45, "empty"){
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target_input) : 
Form("Shrubbery Form", 72, 45, target_input){
	std::cout << "RobotomyRequestForm constructor called, the name is " << target_input << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &frag) : 
Form("Shrubbery Form", 72, 45, "empty"){
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = frag;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & obj){
	std::cout << "Assignation" << std::endl;
	Form::operator=(obj);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	Form::check_grade_to_exe(executor.getGrade());

	std::cout << "lol,hahhahahhahah..." << std::endl;
	if ((rand() % 100 + 0) <= 50)
		std::cout << executor.getName() << " has been robotomized !" << std::endl;
	else
		std::cout << "Robotomized failed !" << std::endl;
}

