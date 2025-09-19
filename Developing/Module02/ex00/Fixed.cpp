/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 21:51:20 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/14 20:52:48 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Define the static member
const int Fixed::_fractionalBits = 8;

// Default constructor
Fixed::Fixed() : _raw(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &other) : _raw(other._raw) {
    std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment
Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_raw = other._raw;
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Desructor called" << std::endl;
}

// Getter
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_raw;
}

// Setter
void Fixed::setRawBits(int const raw) {
    this->_raw = raw;
}