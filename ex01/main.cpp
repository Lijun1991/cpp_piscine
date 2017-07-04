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

#include "phonebook.hpp"

int main(void)
{
	contact contact;
	char command[10];
	while (1)
	{
		std::cout << "Please enter a valid command: ";
		cin >> command;
		if (strcmp(command, "EXIT"))
			return 0;
		else if (strcmp(command, "ADD"))
		{
			std::cout << "Please enter new contact infomation: ";
			contact.add(i, input);
		}
		else if (strcmp(command, "SEARCH"))
		{
			contact.search(contact.Count_contact);
		}
	}
}
