/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:17:33 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:17:33 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
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