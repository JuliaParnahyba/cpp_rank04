/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:25:30 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/11 18:43:45 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- INCLUDE GUARD ---------- */
// if not defined, define this.
#ifndef SCAVTRAP_HPP    // start include guard: prevent multiple inclusion
#define SCAVTRAP_HPP    // define guard macro once for this translation unit

/* ---------- STANDARD LIBRARIES ---------- */
#include <iostream>
#include <string>

/* --------- PROJECT HEADERS --------- */
#include "ClapTrap.hpp"      // ClapTrap class for base class to inherit

// inherit class
class   ScavTrap : virtual public ClapTrap {
    public:
        // OCF
        ScavTrap();                                 // def. ctor
        explicit ScavTrap(const std::string &name); // expl. ctor

        ScavTrap(const ScavTrap &other);            // copy ctor
        ScavTrap &operator=(const ScavTrap &rhs);   // copy asgn
        ~ScavTrap();                                // dtor

        // method
        void    attack(const std::string &target);
        void    guardGate();
};

#endif // SCAVTRAP_HPP
// end include guard