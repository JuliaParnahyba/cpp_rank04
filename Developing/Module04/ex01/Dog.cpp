/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:27:59 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 11:05:58 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

// default constructor
Dog::Dog() : Animal("Dog"), brain(new Brain()) {
    std::cout << "[Dog] default-ctor" << std::endl; 
}

// copy constructor
Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "[Dog] copy-ctor" << std::endl;
}

// copy assignment
Dog &Dog::operator=(const Dog &rhs) {
    std::cout << "[Dog] copy-assign" << std::endl;
    if (this != &rhs) {
        Animal::operator=(rhs);
        // replace this brain for a copy
        Brain *newBrain = new Brain(*rhs.brain);
        delete brain;
        brain = newBrain;
    }
    std::cout << "[Dog] copy-assign" << std::endl;
    return *this;
}

// destructor
Dog::~Dog() {
    delete brain;
    std::cout << "[Dog] dtor" << std::endl;
}                          

// methods / behavior
void Dog::makeSound() const {
    std::cout << "[Dog] Woof!" << std::endl;
}

// utils for tests
void Dog::setIdea(int i, const std::string &idea) { brain->setIdea(i, idea); }

const std::string &Dog::getIdea(int i) const { return brain->getIdea(i); }