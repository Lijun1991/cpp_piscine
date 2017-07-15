/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 15:11:15 by lwang             #+#    #+#             */
/*   Updated: 2017/07/14 15:11:17 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>     // std::cout
#include <algorithm>    // std::minmax_element
#include <vector>        // std::array


// int main(void){

// 	std::vector<int> nums;
// 	nums.push_back(3);
// 	nums.push_back(4);
// 	nums.push_back(5);
// 	nums.push_back(42);
// 	nums.push_back(56);
// 	nums.push_back(189);

// 	std::sort(nums.begin(), nums.end());
// 	// std::reverse(nums.begin(), nums.end());

// 	for (int i = 0; i < 6; i++){
// 		std::cout << nums[i] << std::endl;
// 	}

// 	std::cout << nums[nums.size() - 1] - nums[0] << std::endl;
// }

int main() 
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
