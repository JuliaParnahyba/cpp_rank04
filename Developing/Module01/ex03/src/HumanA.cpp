/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:46:50 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/20 22:04:58 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // std::cout, std::endl
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
    : _name(name), _weapon(weapon) { /*body clean*/ }


void HumanA::attack() const {
    std::cout << this->_name
            << " attacks with their "
            << this->_weapon.getType()
            << std::endl;
}