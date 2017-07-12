/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:22:46 by lwang             #+#    #+#             */
/*   Updated: 2017/07/10 12:22:47 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <stdexcept>

int main(void)
{
	Bureaucrat Burea("b_name1", 120);
	Bureaucrat Burea_cpy1(Burea);
	Form form("f_name1", 10, 120);
	Form form_cpy1(form);

	try {
		std::cout << Burea_cpy1;
		Burea_cpy1.signForm(form_cpy1);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	return (0);
}
