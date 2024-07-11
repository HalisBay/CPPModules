/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:57:03 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 10:57:03 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    FragTrap ali("ali");
    FragTrap mustafa("mustafa");

    ali.attack("x");
    mustafa.attack("x");
    ali.takeDamage(95);
    mustafa.takeDamage(99);
    ali.beRepaired(3);
    mustafa.beRepaired(5);
    ali.highFivesGuys();
    mustafa.highFivesGuys();
    std::cout << "------------- THE END -------------" << std::endl;
}
