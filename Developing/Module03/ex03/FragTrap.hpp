/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:24:57 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/11 18:43:36 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- INCLUDE GUARD ---------- */
// if not defined, define this.
#ifndef FRAGTRAP_HPP    // start include guard: prevent multiple inclusion
#define FRAGTRAP_HPP    // define guard macro once for this translation unit

/* ---------- STANDARD LIBRARIES ---------- */
#include <iostream>
#include <string>

/* --------- PROJECT HEADERS --------- */
#include "ClapTrap.hpp"      // ClapTrap class for base class to inherit

// inherit class
class   FragTrap : virtual public ClapTrap {
    public:
        // OCF
        FragTrap();                                 // def. ctor
        explicit FragTrap(const std::string &name); // expl. ctor

        FragTrap(const FragTrap &other);            // copy ctor
        FragTrap &operator=(const FragTrap &rhs);   // copy asgn
        ~FragTrap();                                // dtor

        // method
        void    attack(const std::string &target);
        void    highFivesGuys(void);
};

#endif // FRAGTRAP_HPP
// end include guard