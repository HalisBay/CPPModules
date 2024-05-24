/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:15:46 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:15:46 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
    Brain *dogBrain;
public:
    Dog();
    ~Dog();
    Dog(const Dog &cpy);
    Dog &operator=(const Dog &other);

    void makeSound() const;
    std::string getType() const;
    void getIdeas(void)const;
	void setIdeas(std::string idea);
};