/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:46:50 by jparnahy          #+#    #+#             */
/*   Updated: 2025/09/19 21:47:51 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream> // std::cout, std::endl

HumanA::HumanA(const std::string &name, Weapon &weapon)
    : _name(name), _weapon(weapon) { /*body clean*/ }

void HumanA::attack() const {
    std::cout << this->_name
            << " attacks with their "
            << this->_weapon.getType()
            << std::endl;
}