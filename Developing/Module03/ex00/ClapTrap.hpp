/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:01:54 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/08 21:29:50 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef CLAPTRAP_HPP    // start include guard: prevent multiple inclusion
#define CLAPTRAP_HPP    // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <iostream>
#include <string>

class   ClapTrap {
    private:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;

    public:
        // OCF - Orthodox Canonical Form
        ClapTrap();                                 // default constructor
        explicit ClapTrap(const std::string &name);

        ClapTrap(const ClapTrap &other);            // copy constructor
        ClapTrap &operator=(const ClapTrap &rhs);   // copy assignment
        ~ClapTrap();                                // destructor

        // methods 
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        // getter for tests
        const std::string   &getName() const;
        int                 getHitPoints() const;
        int                 getEnergyPoints() const;
        int                 getAttackDamage() const;
};

#endif // CLAPTRAP_HPP
// end include guard