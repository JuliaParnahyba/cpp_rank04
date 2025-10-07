/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:01:54 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/06 21:15:07 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef CLAP_TRAP_HPP    // start include guard: prevent multiple inclusion
#define CLAP_TRAP_HPP    // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <iostream>

class   Person {
    public:
        // ClapTrap();                                // default constructor
        // ClapTrap(const Fixed &other);              // copy constructor
        // ClapTrap &operator=(const Fixed &other);   // copy assignment
        // ~ClapTrap();                               // destructor

        // public attributes
        std::string name;
        int         age;

        // methods 
        void    introduce(void);
};

class   Studant : public Person {
    public:
        // public attributes
        int registration;

        // methods
        void    study(void);
};

#endif // CLAP_TRAP_HPP
// end include guard