/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:20:28 by hbay              #+#    #+#             */
/*   Updated: 2024/05/03 12:12:07 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	setName(name);
	setWeapon(weapon);
}

void HumanA::attack(void)
{
	std::cout<< getName() << 
				" attacks with their "
				<< _weapon->getType() << std::endl;
}

std::string HumanA::getName() const
{
	return this->_name;
}

void HumanA::setName(std::string name)
{
	this->_name = name;
}

Weapon& HumanA::getWeapon()
{
	return *this->_weapon;
}

void HumanA::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

HumanA::~HumanA()
{
	std::cout << "strikers has ben slain"<< std::endl;
}

