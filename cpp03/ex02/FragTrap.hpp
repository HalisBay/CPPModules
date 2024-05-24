/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 10:56:57 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 10:56:57 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap:public ClapTrap
{
private:
public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    FragTrap(const FragTrap &cpy);

    FragTrap& operator=(const FragTrap &other);
    void highFivesGuys(void);
};
#endif