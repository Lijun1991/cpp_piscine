/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:17:21 by lwang             #+#    #+#             */
/*   Updated: 2017/07/11 21:17:23 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form;

class Intern {
public:
	Intern();
	~Intern(void);
	Intern(const Intern &f);
	Intern & operator=(const Intern & obj);

	struct FormNotExist : public std::exception{
		const char * what() const throw () {
		return "Form Not Exist";
		}
	};

	Form *makeForm(std::string form_name, std::string form_target);
	Form * searchForm(std::string form_name, std::string form_target);
	Form * robotomyRequest(std::string const & target);
	Form * presidentialPardon(std::string const & target);
	Form * shrubberyCreation(std::string const & target);

};


#endif