/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:56:50 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 10:56:50 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    this->_attackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
    this->_name = "Default FragTrap";
    std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    this->_attackDamage = 30;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
    this->_name = name;
    std::cout << "Created FragTrap "  << name << std::endl;

}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy)
{
    *this = cpy;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " says high five guys "<< std::endl;
}
