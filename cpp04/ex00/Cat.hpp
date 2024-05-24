/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:12:00 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:12:00 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    ~Cat();
    Cat(const Cat &cpy);
    Cat &operator=(const Cat &other);

    void makeSound() const;
    std::string getType() const;
};