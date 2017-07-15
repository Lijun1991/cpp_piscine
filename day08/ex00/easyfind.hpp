/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:04:26 by lwang             #+#    #+#             */
/*   Updated: 2017/07/14 14:04:27 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
void easyfind(T a, int b){
	int find = 0;
	//use iterator to access the values
	std::vector<int>::iterator v = a.begin();
	while (v != a.end()){
		if (*v == b){
			std::cout << "find " << b << " int the first para" << std::endl;
			find = 1;
		}
		v++;
	}
	if (!find)
		throw std::exception();
}


#endif
