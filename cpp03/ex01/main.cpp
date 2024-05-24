/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:54:29 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 10:54:29 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char const *argv[])
{
    ScavTrap ali("ali");
    ScavTrap mustafa("mustafa");

    ali.attack("x");
    mustafa.attack("x");
    ali.takeDamage(95);
    mustafa.takeDamage(99);
    ali.beRepaired(3);
    mustafa.beRepaired(5);
    ali.guardGate();
    mustafa.guardGate();
    std::cout << "------------- THE END -------------" << std::endl;
}
