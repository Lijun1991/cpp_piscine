/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:53:59 by lwang             #+#    #+#             */
/*   Updated: 2017/07/10 16:54:00 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : Name(""), grade_sign(10), grade_exe(140){
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const std::string Name_input, int grade_sign_input, int input_grade_exe, std::string target_input) 
: Name(Name_input), grade_sign(grade_sign_input), grade_exe(input_grade_exe), target(target_input){
	std::cout << "Form constructor called, the name is " << Name_input << std::endl;
}

Form::Form(const Form &frag)
	: Name (frag.Name), grade_sign(frag.grade_sign), grade_exe(frag.grade_exe), target(frag.target){
	std::cout << "Form copy constructor called" << std::endl;
	*this = frag;
}

Form::~Form(void){
	std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=(const Form & obj){
	std::cout << "Assignation" << std::endl;
	return (*this);
}


std::string Form::getName()const{
	return (this->Name);
}

int Form::get_grade_sign()const{
	return (this->grade_sign);
}

int Form::get_grade_exe()const{
	return (this->grade_exe);
}

void Form::check_grade_to_sign(int f_grade)const{
	if (f_grade > get_grade_sign())
		throw GradeTooLowException();
}

void Form::check_grade_to_exe(int f_grade)const{
	if (f_grade < get_grade_exe())
		throw GradeTooHighException();
}

void Form::beSigned(Bureaucrat& burea){
	if (burea.getGrade() <= grade_sign)
		it_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream & p_ostream, Form const & p_Form)
{
	p_ostream << p_Form.getName() << ", Form sign grade is " << p_Form.get_grade_sign() 
	<< ", Form excute grade is " << p_Form.get_grade_exe();
	return p_ostream;
}

void Form::execute(Bureaucrat const & executor) const{
	std::cout << "hahha" << std::endl;
}
