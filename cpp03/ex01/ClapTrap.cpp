/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:54:02 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 10:54:02 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    this->_name = "Default";
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_attackDamage = 0;
    this->_energyPoints = 10;
    this->_hitPoints = 10;
    std::cout << "Created "  << name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap " << this->_name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {
    *this = cpy;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
    this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->_name 
        << " attacks " << target<< " causing " << this->_attackDamage<<  " points of damage!" << std::endl;
        this->_energyPoints--;
    }
    else
        std::cout << this->_name << " has no energy left" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > amount)
    {
        this->_hitPoints -= amount;
    }
    else if (this->_hitPoints > 0)
    {
        this->_hitPoints = 0;
        std::cout <<"Claptrap " << this->_name << " is dead" << std::endl;
    }
    else
    {
        std::cout << "Claptrap " << this->_name << " has been slain" << std::endl;
        return;
    }
    std::cout << "Claptrap " << this->_name 
        << "'s health is " << this->_hitPoints << " becaus it took " << amount <<" of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints  > 0 && this->_hitPoints > 0 && this->_hitPoints + amount <= 10)
    {
        this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << "Claptrap " << this->_name 
        << "'s health is " << this->_hitPoints << " becaus it took " << amount <<" of health." << std::endl;
    }
    else if ( this->_hitPoints + amount > 10)
    {
        std::cout << "Claptrap " << this->_name << "cant be healt because amount is too much" << std::endl;
    }
    else
        std::cout << "Claptrap " << this->_name << " has been slain" << std::endl;
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints)
{
    this->_hitPoints = hitPoints;
}

unsigned int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}

void ClapTrap::setEnergy(unsigned int energyPoints)
{
    this->_energyPoints = energyPoints;
}

unsigned int ClapTrap::getEnergy() const
{
    return this->_energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
    this->_attackDamage = attackDamage;
}

unsigned int ClapTrap::getAttackDamage() const
{
    return this->_attackDamage;
}
