#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_weapon = NULL;
	this->_name =name;
}

HumanB::~HumanB()
{
	std::cout << "Strikers(b) has ben slain" << std::endl;
}

void HumanB::attack(void)
{
	if (!_weapon)
	{
		std::cout<< getName() << " attacks with no weapons " << std::endl;
		return;
	}
	std::string wtype = _weapon->getType();
	std::cout<< getName() << " attacks with their ";
	if (!wtype.empty())
	{
		std::cout << _weapon->getType() << std::endl;
	}
		
}

std::string HumanB::getName() const
{
	return this->_name;
}

void HumanB::setName(std::string name)
{
	this->_name=name;
}

Weapon &HumanB::getWeapon()
{
	return *this->_weapon;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
