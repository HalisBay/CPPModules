/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:54:19 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 10:54:19 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap cp("mokoko");
    std::cout << "---------------------------------------------" << std::endl;

    cp.attack("mokoko");
    cp.attack("name");
    cp.takeDamage(1);
    cp.takeDamage(2);
    cp.takeDamage(3);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.takeDamage(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    cp.beRepaired(1);
    return 0;
}
