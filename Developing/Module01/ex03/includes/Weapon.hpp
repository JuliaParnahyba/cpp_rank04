/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:44:56 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/19 22:12:49 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef WEAPON_HPP  // start include guard: prevent multiple inclusion
#define WEAPON_HPP  // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <string>   // std::string
#include <iostream> // std::cout, std::endl

/* --------- CLASS --------- */
class   Weapon {
    private:
        std::string _type;

    public:
        explicit Weapon(const std::string &type);
        const std::string &getType() const;
        void setType(const std::string &type); 
        
};

/* --------- AUX. FUNCTIONS --------- */


#endif  // WEAPON_HPP
// end include guard