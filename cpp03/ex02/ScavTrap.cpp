/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:57:12 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 10:57:12 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->_attackDamage = 20;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
    this->_name = "Default scavT-Rap";
    std::cout << "Default ScavT-Rap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_attackDamage = 20;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
    std::cout << "Created scavT-Rap "  << name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "scavTrap " << this->_name << " destroyed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
    *this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "scavTrap " << this->_name << " guards the gate" << std::endl;

}

void ScavTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->_name 
        << " attacks " << target<< " causing " << this->_attackDamage<<  " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << this->_name << " has no energy left" << std::endl;
    
}
