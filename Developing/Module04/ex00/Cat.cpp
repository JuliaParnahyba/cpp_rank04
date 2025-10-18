/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:49:19 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/17 22:51:56 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// default constructor
Cat::Cat() : Animal("Cat") {
    std::cout << "[Cat] default-ctor" << std::endl; 
}

// constructor named
Cat::Cat(const std::string &tp) : Animal(tp) {
    std::cout << "[Cat] type-ctor" << std::endl;
}

// copy constructor
Cat::Cat(const Cat &other) : Animal(other) {
    std::cout << "[Cat] copy-ctor" << std::endl;
}

// copy assignment
Cat &Cat::operator=(const Cat &rhs) {
    if (this != &rhs)
        Animal::operator=(rhs);
    std::cout << "[Cat] copy-assign" << std::endl;

    return *this;
}

// destructor
Cat::~Cat() {
    std::cout << "[Cat] dto" << std::endl;
}                          

// methods 
void Cat::makeSound() const {
    std::cout << "[Cat] The sound of " << this->type << " is Maiuuu!" << std::endl;
}
