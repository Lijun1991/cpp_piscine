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

class Form : public Bureaucrat {
private:
	const std::string Name;
	const int grade_sign;
	const int grade_exe;
	bool it_signed;

public:
	void beSigned(Bureaucrat& f);
	void signForm(Bureaucrat& f);


// 	std::string getName();
// 	int getGrade();
// 	struct GradeTooHighException : public std::exception{
// 		const char * what() const throw () {
// 		return "grade is getting too high";
// 		}
// 	};
// 	struct GradeTooLowException : public std::exception{
// 		const char * what() const throw () {
// 		return "grade is getting too low";
// 		}
// 	};

};

#endif

Form::beSigned(Bureaucrat& f){
	if (f.getGrade() < 10)
		this->grade_sign = true;
	else
		throw f.GradeTooLowException();
}

Form::signForm(Bureaucrat& f){
	if (grade_sign)
		std::cout << f.getName() << " bureaucrat signs " << getName() << std::endl;
	else{
		std::cout << f.getName() << " bureaucrat cannot sign " 
		<< getName() << "because" << std::endl;
	}
}

