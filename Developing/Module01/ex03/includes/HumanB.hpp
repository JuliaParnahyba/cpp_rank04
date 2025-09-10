/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:46:19 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/20 23:11:58 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef HUMANB_HPP  // start include guard: prevent multiple inclusion
#define HUMANB_HPP  // define guard macro once for this translation unit

/* --------- PROJECT HEADERS --------- */
#include "Weapon.hpp"  // the Weapon class

/* --------- CLASS --------- */
class   HumanB {
    private:
        std::string _name;
        Weapon  *_weapon;

    public:
        explicit HumanB(const std::string &name);
        void setWeapon(Weapon &newWeapon);
        void attack() const;
};

#endif  // HUMANB_HPP
// end include guard