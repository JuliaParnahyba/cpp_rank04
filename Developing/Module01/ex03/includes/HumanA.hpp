/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:46:12 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/19 22:16:12 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef HUMANA_HPP  // start include guard: prevent multiple inclusion
#define HUMANA_HPP  // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <string>   // std::string

/* --------- PROJECT HEADERS --------- */
#include "Weapon.hpp"  // the Weapon class

/* --------- CLASS --------- */
class   HumanA {
    private:
        std::string _name;
        Weapon  &_weapon;
        
    public:
        HumanA(const std::string &name, Weapon &weapon);
        void attack() const;
        
};

/* --------- AUX. FUNCTIONS --------- */


#endif  // HUMANA_HPP
// end include guard