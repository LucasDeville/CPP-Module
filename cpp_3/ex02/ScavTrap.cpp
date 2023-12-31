/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 10:06:34 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	if (DEBUG)
		std::cout << "ScavTrap Default constructor called" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setDamage(20);
}

ScavTrap::ScavTrap(std::string name) {
	
	if (DEBUG)
		std::cout << "ScavTrap Name constructor called" << std::endl;
	this->setName(name);
	this->setHP(100);
	this->setEP(50);
	this->setDamage(20);
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	
	if (DEBUG)
		std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void) {

	if (DEBUG)
		std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & src) {
	
	if (DEBUG)
			std::cout << "ScavTrap Copy assignement operator called" << std::endl;
	if (this != &src)
	{
		this->setName(src.getName());
		this->setHP(src.getHP());
		this->setEP(src.getEP());
		this->setDamage(src.getDamage());
	}
	return *this;
}

void ScavTrap::attack(const std::string& target) {

	if (this->getHP() <= 0 || this->getEP() <= 0)
	{
		if (this->getHP() <= 0)
			std::cout << "ScavTrap is already dead !" << std::endl;
		else if (this->getEP() <= 0)
			std::cout << "ScavTrap got no more energy and can't attack..." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode." << std::endl;
}
