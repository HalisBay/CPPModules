/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:15:21 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:15:21 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &cpy);
    Animal &operator=(const Animal &other);

    virtual void makeSound() const;
    virtual std::string getType() const;
};