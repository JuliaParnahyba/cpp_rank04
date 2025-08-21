/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:46:35 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/20 22:04:49 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cout, std::endl
#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type) { /*body clean*/ }

const std::string &Weapon::getType() const {
    return this->_type;
}

void Weapon::setType(const std::string &newType) {
    this->_type = newType;
}