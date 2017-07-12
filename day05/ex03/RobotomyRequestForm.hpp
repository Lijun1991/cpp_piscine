/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:33:19 by lwang             #+#    #+#             */
/*   Updated: 2017/07/11 09:33:21 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

// class Form;

class RobotomyRequestForm : public Form {
// private:
// 	std::string target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm(void);

	RobotomyRequestForm(const RobotomyRequestForm &f);
	RobotomyRequestForm & operator=(const RobotomyRequestForm & obj);

	void execute(Bureaucrat const & executor) const;

};

#endif

