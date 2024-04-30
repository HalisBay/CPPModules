/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:18:07 by hbay              #+#    #+#             */
/*   Updated: 2024/04/30 15:28:54 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout<< "created" << std::endl;
}

Zombie::Zombie(std::string _name)
{
	this->name = _name;
}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl;;
}

void Zombie::announce(void)
{
	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

