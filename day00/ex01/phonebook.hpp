/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 18:48:49 by lwang             #+#    #+#             */
/*   Updated: 2017/07/03 18:48:55 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>

class contact{

	public:
		static int Count_contact;
		static int get_Count(){
			return Count_contact;
		}
		char array[9][12][255];
		void search();
		static char info[11][20];
		void add();
};

int contact::Count_contact = 0;

char contact::info[11][20] = {"first name: ", "last name: ", "nickname: ", "login: ", 
		"postal address: ", "email address: ", "phone number: ", "birthday date: ",
		"favorite meal: ", "underwear color: ", "darkest secret: "};

void contact::add()
{
	char input[255];

	for (int i = 0; i < 11; i++){
		std::cout << info[i] << std::endl;
		std::cin >> input;
		strcpy(array[Count_contact][i], input);
	}
	Count_contact++;
	return ;
}

void contact::search(void)
{
	int index;
	char input[255];
	std::cout << std::setw(10) << "index" << std::setw(10) << "first name" 
	<< std::setw(10) << "last name" << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < Count_contact; i++){
		std::cout << std::setw(10) << i;
		for (int j = 0; j < 3; j++){
			if (strlen(array[i][j]) > 8){
				for (int m = 0; m < 8; m++){
					std::cout << array[i][j][m];
				}
				std::cout << ".|";
			}
			else
				std::cout << std::setw(9) << array[i][j] << "|";
		}
		std::cout << std::endl;
	}
	if (Count_contact)
	{
		std::cout << "\n" << "Which one are you searching for?" << std::endl;
		std::cin >> input;
		if (strlen(input) > 1 || input[0] > '8' || input[0] < '0' || input[1])
		{
			std::cout << "invald choice" << std::endl;
			return ;
		}
		for (int i = 0; i < 12; i++){
			std::cout << array[input[0] - 48][i] << std::endl;
		}
	}
	return ;
}

#endif
