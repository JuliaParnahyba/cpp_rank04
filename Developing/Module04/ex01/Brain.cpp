/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:36:09 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/18 23:08:38 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// default constructor
Brain::Brain() {
    std::cout << "[Brain] default-ctor" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
}

// copy constructor
Brain::Brain(const Brain &other) {
    std::cout << "[Brain] copy-ctor" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

// copy assignment
Brain &Brain::operator=(const Brain &rhs) {
    std::cout << "[Brain] copy-assign\n";
    if (this != &rhs)
        for (int i = 0; i < 100; i++)
            ideas[i] = rhs.ideas[i];
    return *this;
}

// destructor
Brain::~Brain() {
    std::cout << "[Brain] dtor\n";
}

// utils for tests
void Brain::setIdea(int i, const std::string &idea) {
    if (i >= 0 && i < 100)
        ideas[i] = idea;
    else
        std::cout << "Invalid index. Plense enter a number between 0 - 99"
            << std::endl;
}

const std::string   &Brain::getIdea(int i) const {
    static const std::string empty = "";
    if (i >= 0 && i < 100)
        return ideas[i];
    else
        std::cout << "Invalid index" << std::endl;    
    return empty;
}