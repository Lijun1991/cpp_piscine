/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 18:48:49 by lwang             #+#    #+#             */
/*   Updated: 2017/07/03 18:48:55 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>

class contact{

	public:
		char info[12];
		static int Count_contact;
		contact(void);
		static int get_Count(){
			return Count_contact;
		}
		std::string array[9][12][255];
		void add();
		void search();
		void display(int i);
		// contact();
		// ~contact();
};

int contact::Count_contact = 0;

contact::contact(void){
	Count_contact++;
	this->info[12] = {"first name: ", "last name: ", "nickname: ", "login: ", 
	"postal address: ", "email address: ", "phone number: ", "birthday date: ",
	"favorite meal: ", "underwear color: ", "darkest secret: "};
}

std::string array[9][12][255];

void contact::add(void)
{
	std::string input[255];
	for (int i = 0; i < 12, i++;){
		std::cout << info[i];
		std::cin >> input;
		array[Count_contact][i] = array[Count_contact][i] + input;
		// strcpy(array[Count_contact][i], input);
	}
	return ;
	// contact.array[contact.Count_contact][12] = '\0';
}

void contact::display(int i)
{
	std::cout << array[Count_contact];
	return ;
}

void contact::search(int i)
{
	std::cout << std::setw(10) << "index" << std::setw(10) << "first name" << std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < contact.Count_contact; i++;){
		for (int j = 0; j < 4; j++;){
			std::cout << std::setw(10) << contact.array[i][j] << std::cout << "|";
		}
	}
	std::cout << "Which one are you searching for?" << std::endl;
	return ;
}

#endif
