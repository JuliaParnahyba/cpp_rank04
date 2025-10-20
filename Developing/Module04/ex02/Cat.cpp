/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:32:56 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 11:59:15 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

// default constructor
Cat::Cat() : Animal("Cat"), brain(new Brain()) {
    std::cout << "[Cat] default-ctor" << std::endl; 
}

// copy constructor
Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "[Cat] copy-ctor" << std::endl;
}

// copy assignment
Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs) {
        Animal::operator=(rhs);
        // replace this brain for a copy
        Brain *newBrain = new Brain(*rhs.brain);
        delete brain;
        brain = newBrain;
    }
    std::cout << "[Cat] copy-assign" << std::endl;
    return *this;
}

// destructor
Cat::~Cat() {
    delete brain;
    std::cout << "[Cat] dtor" << std::endl;
}                          

// methods 
void Cat::makeSound() const {
    std::cout << "[Cat] Meow!" << std::endl;
}

// utils for tests
void Cat::setIdea(int i, const std::string &idea) { brain->setIdea(i, idea); }

const std::string &Cat::getIdea(int i) const { return brain->getIdea(i); }