/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:19:09 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/22 10:36:05 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	
}

Weapon::Weapon(std::string type) {
	this->_type = type;
}

Weapon::~Weapon() {
}

std::string	const Weapon::getType(void) const {
	return this->_type;
}

void	Weapon::setType(std::string stype) {
	this->_type = stype;
}
