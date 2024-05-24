/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbay <hbay@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 11:15:29 by hbay              #+#    #+#             */
/*   Updated: 2024/05/24 11:15:29 by hbay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain& cpy);
    Brain& operator=(const Brain& other);

    std::string getIdeas() const;
    void setIdeas(std::string idea);

};
