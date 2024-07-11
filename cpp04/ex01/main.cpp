/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:16:34 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:16:34 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <string>
#include <sstream> 

int main() {
    Dog* dogs[3];
    for (int i = 0; i < 3; ++i) {
        dogs[i] = new Dog();
    }

    Cat* cats[3];
    for (int i = 0; i < 3; ++i) {
        cats[i] = new Cat();
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << "Type: Dog" << std::endl;
        dogs[i]->makeSound();
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << "Type: Cat" << std::endl;
        cats[i]->makeSound();
    }

    std::stringstream ss;
    for (int i = 0; i < 3; ++i) {
        ss.str(""); // Clear stringstream
        ss << "Idea for Dog " << i;
        dogs[i]->setIdeas(ss.str());

        ss.str(""); // Clear stringstream
        ss << "Idea for Cat " << i;
        cats[i]->setIdeas(ss.str());
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << "Ideas for Dog " << i << ": ";
        dogs[i]->getIdeas();
    }

    for (int i = 0; i < 3; ++i) {
        std::cout << "Ideas for Cat " << i << ": ";
        cats[i]->getIdeas();
    }

    for (int i = 0; i < 3; ++i) {
        delete dogs[i];
        delete cats[i];
    }

    return 0;
}