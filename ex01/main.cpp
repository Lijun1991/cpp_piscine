/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 18:47:46 by lwang             #+#    #+#             */
/*   Updated: 2017/07/03 18:47:48 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "phonebook.hpp"

int main(void)
{
	char command[10];
	const char info[12] = {"first name: ", "last name: ", 
	"nickname: ", "login: ", "postal address: ", 
	"email address: ", "phone number: ", "birthday date: "
	"favorite meal: ", "underwear color: ", "darkest secret: "};
	char input[225];
	while (1)
	{
		std::cout << "Please enter a command: ";
		cin >> command;
		if (strcmp(command, "EXIT"))
			return 0;
		else if (strcmp(command, "ADD"))
		{
			contact contact;
			std::cout << "Please enter new contact infomation: ";
			for (int i = 0; i < 12, i++){
				std::cout << info[i];
				cin >> input;
				contact.add(i, input);
			}
		}
		else if (strcmp(command, "SEARCH"))
			contact.search();
	}
}
