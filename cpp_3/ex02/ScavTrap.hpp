/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 10:06:33 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

private:

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap& 	operator=(ScavTrap const & src);
	void 		attack(const std::string& target);
	void 		guardGate(void);

};