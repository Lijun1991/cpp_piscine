/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:32:56 by lwang             #+#    #+#             */
/*   Updated: 2017/07/11 09:32:58 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

// class Form;

class ShrubberyCreationForm : public Form {
// private:
// 	std::string target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm(const ShrubberyCreationForm &f);
	ShrubberyCreationForm & operator=(const ShrubberyCreationForm & obj);
	void execute(Bureaucrat const & executor) const;

};

#endif
