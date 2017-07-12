/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:32:49 by lwang             #+#    #+#             */
/*   Updated: 2017/07/11 09:32:51 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : 
Form("Shrubbery Form", 145, 137, "empty"){
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target_input) : 
Form("Shrubbery Form", 145, 137, target_input){
	std::cout << "ShrubberyCreationForm constructor called, the name is " << target_input << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &frag) : 
Form("Shrubbery Form", 145, 137, "empty"){
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = frag;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & obj){
	std::cout << "Assignation" << std::endl;
	Form::operator=(obj);
	return (*this);
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	Form::check_grade_to_sign(executor.getGrade());
	//define file name
	std::string file_name = target + "_shrubbery";
	// open a file in write mode
	std::ofstream outfile;
	outfile.open(file_name);
	//define a tree
	std::string ASCII_tree = 
	"							"	
	"               ,@@@@@@@,"
    "   ,,,.   ,@@@@@@/@@,  .oo8888o."
    ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o"
   ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"
  " %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"
  " %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'"
  " `&%\\ ` /%&'    |.|        \\ '|8'"
   "    |o|        | |         | |"
   "    |.|        | |         | |"
"jgs \\/ ._/\\//_/__/  ,\\_//__\\/.  \\_//__/_"
	;
	//write tree into the file
	outfile << ASCII_tree << std::endl;
	//close the opened file
	outfile.close();
}


