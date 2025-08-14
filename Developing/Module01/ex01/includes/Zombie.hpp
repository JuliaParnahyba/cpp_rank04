/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:18:48 by jparnahy          #+#    #+#             */
/*   Updated: 2025/08/12 21:21:23 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef ZOMBIE_HPP  // start include guard: prevent multiple inclusion
#define ZOMBIE_HPP  // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <string>   // std::string used as a data member
#include <iostream> // std::cout, std::endl

/* --------- CLASS --------- */
class   Zombie {        // class declaration (no implementations here)
private:
    std::string _name;  // zombie's name (encapsulated)

public:
    Zombie();   // default ctor (will set a neutral name in .cpp)   
    explicit    Zombie(const std::string &name);    // name ctor; 'explicit' avoids implicit conversions
    ~Zombie();  // destructor (will log destruction to trace lifetime)

    void        announce() const;   // prints "<name>: BraiiiiiiinnnzzzZ..."; 'const' means no state change
};

/* --------- AUX. FUNCTIONS --------- */
Zombie  *newZombie(const std::string &name);    // heap factory; caller owns and must delete
void    randomChump(const std::string &name);   // stack factory; creates, announces, auto-destroys

#endif  // end include guard
// ZOMBIE_HPP