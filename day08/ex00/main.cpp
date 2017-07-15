/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 14:04:33 by lwang             #+#    #+#             */
/*   Updated: 2017/07/14 14:04:35 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void){
	try{
		//assume T is a container of int
		std::vector<int> nums;
		nums.push_back(3);
		nums.push_back(4);
		nums.push_back(5);
		nums.push_back(42);
		nums.push_back(56);
		nums.push_back(189);
		//scan array nums to find number 42
		easyfind(nums, 42);
	}
	catch(std::exception const &ex){
		std::cout << ex.what() << std::endl;
	}
}
