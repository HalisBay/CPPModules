/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:14:25 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:14:25 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    ~Dog();
    Dog(const Dog &cpy);
    Dog &operator=(const Dog &other);

    void makeSound() const;
    std::string getType() const;
};