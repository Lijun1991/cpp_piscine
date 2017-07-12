/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:54:09 by lwang             #+#    #+#             */
/*   Updated: 2017/07/10 16:54:10 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
private:
	const std::string Name;
	const int grade_sign;
	const int grade_exe;
	bool it_signed;

protected:
	std::string target;

public:
	Form();
	Form(const std::string Name_input, int input_grade_sign, int input_grade_exe, std::string target_input);
	~Form(void);
	Form(const Form &f);
	Form & operator=(const Form & obj);

	struct GradeTooHighException : public std::exception{
		const char * what() const throw () {
		return "grade is getting too high";
		}
	};
	struct GradeTooLowException : public std::exception{
		const char * what() const throw () {
		return "grade is getting too low";
		}
	};

	std::string getName()const;
	int get_grade_sign()const;
	int get_grade_exe()const;
	void check_grade_to_sign(int f_grade)const;
	void check_grade_to_exe(int f_grade)const;
	void beSigned(Bureaucrat& f);
	virtual void execute(Bureaucrat const & executor) const;

};

std::ostream & operator<<(std::ostream & p_ostream, Form const & Form);

#endif


