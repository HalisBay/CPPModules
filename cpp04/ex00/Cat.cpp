/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:12:05 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:12:05 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat escaped" << std::endl;
}

Cat::Cat(const Cat &cpy) {
    *this = cpy;
}

Cat &Cat::operator=(const Cat &other) {
    this->type = other.type;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Miyav" << std::endl;
}

std::string Cat::getType() const {
    return this->type;
}