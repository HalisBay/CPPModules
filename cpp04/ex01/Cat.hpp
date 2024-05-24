/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:15:39 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:15:39 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
    Brain *catBrain;
public:
    Cat();
    ~Cat();
    Cat(const Cat &cpy);
    Cat &operator=(const Cat &other);

    void makeSound() const;
    std::string getType() const;
    void getIdeas(void)const;
	void setIdeas( std::string idea);
};