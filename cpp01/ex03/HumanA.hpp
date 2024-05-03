/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:10:45 by hbay              #+#    #+#             */
/*   Updated: 2024/05/03 12:11:46 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA
{
private:
	std::string _name;
	Weapon* _weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack(void);
	std::string getName() const;
	void setName(std::string name);
	Weapon& getWeapon();
	void setWeapon(Weapon& weapon);
};

#endif

