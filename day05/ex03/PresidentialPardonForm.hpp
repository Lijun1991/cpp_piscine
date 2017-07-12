/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:33:44 by lwang             #+#    #+#             */
/*   Updated: 2017/07/11 09:33:46 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

// class Form;

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm(void);

	PresidentialPardonForm(const PresidentialPardonForm &f);
	PresidentialPardonForm & operator=(const PresidentialPardonForm & obj);

	void execute(Bureaucrat const & executor) const;

};

#endif

