/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 19:35:53 by lwang             #+#    #+#             */
/*   Updated: 2017/07/05 19:35:55 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human{
	public:
		Human(void);
		~Human(void);

		Brain const &getBrain(void) const;
		std::string identify(void) const;

	private:
		Brain const a_brain;

};

#endif
