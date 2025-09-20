/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:18:48 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/14 19:52:53 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// public API from module
/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef ZOMBIE_HPP  // start include guard: prevent multiple inclusion
#define ZOMBIE_HPP  // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <string>   // std::string used as a data member
#include <iostream> // std::cout, std::endl

/* --------- CLASS --------- */
class   Zombie {
    private:
        std::string _name;  // zombie's name (encapsulated)

    public: 
        Zombie();   // default ctor (will set a neutral name in .cpp)   
        explicit    Zombie(const std::string &name);    // single-arg ctor; avoid implicit conversions
        ~Zombie();  // destructor (will log in .cpp for visibility)

        void announce() const;   // prints "<name>: BraiiiiiiinnnzzzZ..." (no state change)
        void setName(const std::string &name);  // needed to assign names after new[] constructs
};

/* --------- AUX. FUNCTIONS --------- */
// Factory for ex01: allocate N zombies on the heap and set their names.
// Returns base pointer (caller must delete[]). Returns 0 if N <= 0.
Zombie *zombieHorde(int N, const std::string &name);

#endif  // ZOMBIE_HPP
// end include guard
