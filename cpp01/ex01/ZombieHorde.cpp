/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 15:10:18 by hbay              #+#    #+#             */
/*   Updated: 2024/05/01 15:10:18 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{

    Zombie *hordes = new Zombie[N];

    for (size_t i = 0; i < N; i++)
    {
        // Zombie Zombie(name);
        hordes[i].setName(name);
        hordes[i].announce();
    }
    return hordes;
    
}
