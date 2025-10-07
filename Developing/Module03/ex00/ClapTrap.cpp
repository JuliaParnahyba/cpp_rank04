/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:07:46 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/06 21:16:44 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void    Person::introduce(void) {
    std::cout << "Hi! I'm " << name 
            << " and I have " << age << " yeas old."
            << std::endl;
}

void   Studant::study(void) {
    std::cout << name << " is studing!" << std::endl;
}