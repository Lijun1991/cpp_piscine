/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:22:37 by lwang             #+#    #+#             */
/*   Updated: 2017/07/10 12:22:39 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : Name(""), grade(1){
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string Name_input, int grade_input) 
: Name(Name_input), grade(grade_input){
	std::cout << "Bureaucrat constructor called, the name is " << Name_input << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &frag)
	: Name (frag.Name), grade(frag.grade){
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = frag;
}

Bureaucrat::~Bureaucrat(void){
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & obj){
	std::cout << "Assignation" << std::endl;
	return (*this);
}

void Bureaucrat::increment_grade(int add){
	if (this->grade + add > 150)
		throw GradeTooLowException();
	else
		this->grade += add;
}
void Bureaucrat::decrement_grade(int deduct){
	if (this->grade - deduct < 1)
		throw GradeTooHighException();
	else
		this->grade -= deduct;
}

std::string Bureaucrat::getName()const {
	return (this->Name);
}

int Bureaucrat::getGrade() const{
	return (this->grade);
}

std::ostream & operator<<(std::ostream & p_ostream, Bureaucrat const & p_bureaucrat)
{
	p_ostream << p_bureaucrat.getName() << ", bureaucrat grade " << p_bureaucrat.getGrade() << std::endl;
	return p_ostream;
}

void Bureaucrat::signForm(Form & f){
	if (grade <= f.get_grade_sign())
		std::cout << *this << " signs " << f << std::endl;
	else{
		std::cout << *this << " cannot sign " 
		<< f << "because grade is too low" << std::endl;
	}
	f.beSigned(*this);
}


