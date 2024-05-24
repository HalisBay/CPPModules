/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:14:49 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:14:49 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
    /* data */
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &cpy);
    WrongCat &operator=(const WrongCat &other);

    void makeSound() const;
    std::string getType() const;
};
