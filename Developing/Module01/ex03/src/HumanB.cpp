/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:47:01 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/20 22:34:05 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cout, std::endl
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
    : _name(name), _weapon(NULL) { /* body clean */ }

void HumanB::setWeapon(Weapon &newWeapon) {
    this->_weapon = &newWeapon;
}

void HumanB::attack() const {
    std::cout << this->_name
            << " attacks with their "
            << this->_weapon->getType()
            << std::endl;
}

