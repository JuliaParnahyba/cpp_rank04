/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 21:39:48 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/08 21:52:19 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ---------- INCLUDE GUARD ---------- */
// if not defined, define this.
#ifndef CLAPTRAP_HPP    // start include guard: prevent multiple inclusion
#define CLAPTRAP_HPP    // define guard macro once for this translation unit

/* ---------- STANDARD LIBRARIES ---------- */
#include <iostream>
#include <string>

// base class
class   ClapTrap {
    protected:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
    
    public:
        // OCF - Orthodox Canonical Form
        ClapTrap();                                 // default ctor
        explicit ClapTrap(const std::string &name); // declared ctor

        ClapTrap(const ClapTrap &other);            // copy ctor
        ClapTrap &operator=(const ClapTrap &rhs);   // copy asgn
        ~ClapTrap();                                // dtor

        // methods
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        // getters for tests
        const std::string   &getName() const;
        int                 getHitPoints() const;
        int                 getEnergyPoints() const;
        int                 getAttackDamage() const;
};

#endif // CLAPTRAP_HPP
// end include guard