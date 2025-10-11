/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:07:46 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/08 21:24:05 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: _name("NoName"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "[ClapTrap] default-ctor: " << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "[ClapTrap] name-ctor: " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) :
    _name(other._name),
    _hitPoints(other._hitPoints),
    _energyPoints(other._energyPoints),
    _attackDamage(other._attackDamage) {
        std::cout << "[ClapTrap] copy-ctor: " << _name << std::endl;
    }

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    if (this != &rhs) {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    std::cout << "[ClapTrap] copy-assign: " << _name << std::endl;
    
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "[ClapTrap] dtor: " << _name << std::endl;
}

// Methods
void    ClapTrap::attack(const std::string &target) {
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name 
            << " can’t attack: no hit points." << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "ClapTrap " << _name 
            << " can’t attack: no energy." << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks "
        << target << ", causing " << _attackDamage << " points of damage!"
        << std::endl;
    this->_energyPoints -= 1;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints == 0) {
        std::cout << "ClapTrap " << _name
            << " is already at 0 HP." << std::endl;
        return;
    }
    int dmg = static_cast<int>(amount);
    if ((_hitPoints - dmg) < 0)
        _hitPoints = 0;
    else
        _hitPoints -= dmg;
    std::cout << "ClapTrap " << _name << " took "
        << amount << " damage, HP now " << _hitPoints << "."
        << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints == 0) {
        std::cout << "ClapTrap " << _name 
            << " can’t repair: no hit points." << std::endl;
        return;
    }
    if (_energyPoints == 0) {
        std::cout << "ClapTrap "<< _name
            << " can’t repair: no energy." << std::endl;
        return;
    }
    _energyPoints -= 1;
    _hitPoints += static_cast<int>(amount);
    std::cout << "ClapTrap " << _name << " repairs " << amount
        << " HP, HP now " << _hitPoints << "." << std::endl;

}

// getters
const std::string &ClapTrap::getName() const { return this->_name; }

int ClapTrap::getHitPoints() const { return this->_hitPoints; }

int ClapTrap::getEnergyPoints() const { return this->_energyPoints; }

int ClapTrap::getAttackDamage() const { return this->_attackDamage; }
