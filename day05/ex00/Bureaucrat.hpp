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

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(const std::string Name_input, int grade_input);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat &frag);
	Bureaucrat & operator=(const Bureaucrat & obj);

	const std::string Name;
	int	grade;

	std::string getName() const;
	int getGrade() const;
	void increment_grade(int add);
	void decrement_grade(int deduct);
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
};

std::ostream & operator<<(std::ostream & p_ostream, Bureaucrat const & p_bureaucrat);

#endif

