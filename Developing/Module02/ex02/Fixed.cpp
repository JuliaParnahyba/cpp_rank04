/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:46:46 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/18 00:41:53 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <stdexcept>

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

// Arithmetic operators
Fixed Fixed::operator+(Fixed const &rhs) const {
    Fixed sum;
    sum.setRawBits(this->_raw + rhs._raw);
    return sum;
}

Fixed Fixed::operator-(Fixed const &rhs) const {
    Fixed diff;
    diff.setRawBits(this->_raw - rhs._raw);
    return diff;
}

Fixed Fixed::operator*(Fixed const &rhs) const {
    const int scale = (1 << Fixed::_fractionalBits);
    long long temp = static_cast<long long>(this->_raw) * static_cast<long long>(rhs._raw);
    
    Fixed prod;
    prod.setRawBits(static_cast<int>(temp) / scale);
    return prod;    
}

Fixed Fixed::operator/(Fixed const &rhs) const {
    const int scale = (1 << Fixed::_fractionalBits);
    
    if (rhs._raw == 0)
        throw std::runtime_error("division by zero");
    
    long long num = static_cast<long long>(this->_raw) * scale; 
    long long den = static_cast<long long>(rhs._raw);
    
    Fixed quo;
    quo.setRawBits(static_cast<int>(num / den));
    return quo;
}

// Output stream operator
std::ostream &operator<<(std::ostream &out, Fixed const &rhs) {
    return out << rhs.toFloat();
}