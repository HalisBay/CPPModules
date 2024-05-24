/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:40:43 by hbay              #+#    #+#             */
/*   Updated: 2024/05/16 13:40:43 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
class ClapTrap
{
protected: 
    std::string _name;
    /// @brief represent the health of the ClapTrap
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    ClapTrap(const ClapTrap &cpy);
    ClapTrap& operator=(const ClapTrap& other);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void setName(std::string name);
    std::string getName() const;
    void setHitPoints(unsigned int hitPoints);
    unsigned int getHitPoints() const;
    void setEnergy(unsigned int energyPoints);
    unsigned int getEnergy() const;
    void setAttackDamage(unsigned int attackDamage);
    unsigned int getAttackDamage() const;
    
};

#endif