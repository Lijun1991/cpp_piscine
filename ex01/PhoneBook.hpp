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

class contact{

	public:
		static int Count_contact;
		contact(void){
			Count_contact++;
		}
		static int get_Count(){
			return Count_contact;
		}
		char array[12][255];
		void add(int i, char input[]);
		void search();
		void display();
}

int contact::Count_contact = 0;

void contact::add(int i)
{
	if (i == 0)
		contact.array[0] = 

}

#endif
