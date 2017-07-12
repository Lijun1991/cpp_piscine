/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:22:27 by lwang             #+#    #+#             */
/*   Updated: 2017/07/10 12:22:29 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CPP
#define BUREAUCRAT_CPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

class Form;

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(const std::string Name_input, int grade_input);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat &frag);
	Bureaucrat & operator=(const Bureaucrat & obj);

	const std::string Name;
	int	grade;

	std::string getName()const;
	int getGrade()const;
	void increment_grade(int add);
	void decrement_grade(int deduct);
	struct GradeTooHighException : public std::exception{
		const char * what() const throw () {
		return "grade is too high";
		}
	};
	struct GradeTooLowException : public std::exception{
		const char * what() const throw () {
		return "grade is too low";
		}
	};

	void signForm(Form & f);
	void executeForm(Form & f);
};

std::ostream & operator<<(std::ostream & p_ostream, Bureaucrat const & p_bureaucrat);

#endif

