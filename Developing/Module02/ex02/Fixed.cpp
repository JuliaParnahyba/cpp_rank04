/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:46:46 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/15 22:26:20 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Define the static member
const int Fixed::_fractionalBits = 8;

// Default constructor
Fixed::Fixed() : _raw(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Int constructor
Fixed::Fixed(const int nbr) : _raw(nbr * (1 << Fixed::_fractionalBits)) {
    std::cout << "Int constructor called" << std::endl;
}

// Float constructor
Fixed::Fixed(const float nbr) : _raw(roundf(nbr * (1 << Fixed::_fractionalBits))) {
    std::cout << "Float constructor called" << std::endl;
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
    std::cout << "Destructor called" << std::endl;
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

// Convert to int
int Fixed::toInt(void) const {
    const int factor = (1 << Fixed::_fractionalBits);
    return this->_raw / factor;
}

// Convert to float
float Fixed::toFloat(void) const {
    const float factor = (1 << Fixed::_fractionalBits);
    return this->_raw / factor;
}

// Comparison operators
bool Fixed::operator>(Fixed const &rhs) const {
    return this->_raw > rhs._raw;
}

bool Fixed::operator<(Fixed const &rhs) const {
    return this->_raw < rhs._raw;
}

bool Fixed::operator>=(Fixed const &rhs) const {
    return this->_raw >= rhs._raw;
}

bool Fixed::operator<=(Fixed const &rhs) const {
    return this->_raw <= rhs._raw;
}

bool Fixed::operator==(Fixed const &rhs) const {
    return this->_raw == rhs._raw;
}

bool Fixed::operator!=(Fixed const &rhs) const {
    return this->_raw != rhs._raw;
}

// Output stream operator
std::ostream &operator<<(std::ostream &out, Fixed const &rhs) {
    return out << rhs.toFloat();
}