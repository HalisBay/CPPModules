/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:11:51 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:11:51 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal() {
    this->type = "Animal";
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animals escaped" << std::endl;
}

Animal::Animal(const Animal &cpy) {
    *this = cpy;
}

Animal &Animal::operator=(const Animal &other) {
    
    this->type = other.type;
    return *this;
}

void Animal::makeSound() const {
    std::cout << "There are too many animal sounds " << std::endl;
}

std::string Animal::getType() const {
    return this->type;
}