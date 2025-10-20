/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:32:38 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 11:58:11 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

// default constructor
Brain::Brain() {
    std::cout << "[Brain] default-ctor" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
}

// copy constructor
Brain::Brain(const Brain &other) {
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
    std::cout << "[Brain] copy-ctor" << std::endl;
}

// copy assignment
Brain &Brain::operator=(const Brain &rhs) {
    if (this != &rhs)
        for (int i = 0; i < 100; i++)
            ideas[i] = rhs.ideas[i];
    std::cout << "[Brain] copy-assign\n";
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
        std::cout << "[Brain] invalid index (use 0..99)" << std::endl;
}

const std::string   &Brain::getIdea(int i) const {
    static const std::string empty = "";
    if (i >= 0 && i < 100)
        return ideas[i];
    std::cout << "[Brain] invalid index (use 0..99)" << std::endl;    
    return empty;
}