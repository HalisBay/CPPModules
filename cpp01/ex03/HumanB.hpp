/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:46:39 by hbay              #+#    #+#             */
/*   Updated: 2024/05/03 12:11:54 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB
{
private:
	std::string _name;
	Weapon* _weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void attack(void);
	std::string getName() const;
	void setName(std::string name);
	Weapon& getWeapon();
	void setWeapon(Weapon& weapon);
};

#endif
