/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:26:39 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/11 19:52:05 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- INCLUDE GUARD ---------- */
// if not defined, define this.
#ifndef DIAMONDTRAP_HPP    // start include guard: prevent multiple inclusion
#define DIAMONDTRAP_HPP    // define guard macro once for this translation unit

/* ---------- STANDARD LIBRARIES ---------- */
#include <iostream>
#include <string>

/* --------- PROJECT HEADERS --------- */
#include "ClapTrap.hpp" // ClapTrap class for base class to inherit
#include "FragTrap.hpp" // FragTrap class for base class to inherit
#include "ScavTrap.hpp" // ScavTrap class for base class to inherit

// inherit class
class   DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string _name;                              // DiamondTraps's own name
        
    public:
        // OCF
        DiamondTrap();                                  // def. ctor
        explicit DiamondTrap(const std::string &name);  // expl. ctor

        DiamondTrap(const DiamondTrap &other);          // copy ctor
        DiamondTrap &operator=(const DiamondTrap &rhs); // copy asgn
        ~DiamondTrap();                                 // dtor

        // method
        void    attack(const std::string &target);      // will delegate to ScavTrap::attack
        void    whoAmI();

        //getter for tests
        const std::string   &getName() const;
};

#endif // DIAMONDTRAP_HPP
// end include guard