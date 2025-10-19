/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:27:46 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/18 23:53:24 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

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
    std::cout << "[Cat] copy-assign" << std::endl;
    if (this != &rhs) {
        Animal::operator=(rhs);
        // replace this brain for a copy
        Brain *newBrain = new Brain(*rhs.brain);
        delete brain;
        brain = newBrain;
    }
    return *this;
}

// destructor
Cat::~Cat() {
    delete brain;
    std::cout << "[Cat] dtor" << std::endl;
}                          

// methods 
void Cat::makeSound() const {
    std::cout << "[Cat] The sound of " << this->type << " is Maiuuu!" << std::endl;
}

// utils for tests
void Cat::setIdea(int i, const std::string &idea) { brain->setIdea(i, idea); }

const std::string &Cat::getIdea(int i) const { return brain->getIdea(i); }