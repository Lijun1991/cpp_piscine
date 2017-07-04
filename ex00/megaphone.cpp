/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 15:44:05 by lwang             #+#    #+#             */
/*   Updated: 2017/07/03 15:44:07 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class mega{

public:
	void UpLetter(char **argv);
};

void mega::UpLetter(char **argv){
	int i = 1; 
	int j;
	while (argv[i]){
		j = 0;
		while (argv[i][j]){
			if (argv[i][j] <= 'z' && argv[i][j] >= 'a')
				std::cout << char(argv[i][j] - 32);
			else
				std::cout << argv[i][j];
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return ;
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		mega megaphone;	
		megaphone.UpLetter(argv);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
