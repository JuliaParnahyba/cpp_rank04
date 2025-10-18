/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:07:53 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/17 22:19:33 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef ANIMAL_HPP    // start include guard: prevent multiple inclusion
#define ANIMAL_HPP    // define guard macro once for this translation unit

/* --------- STANDARD LIBRARIES --------- */
#include <iostream>
#include <string>

class   Animal {
    protected:
        std::string type;

    public:
        // OCF - Orthodox Canonical Form
        Animal();                                 // default constructor
        explicit Animal(const std::string &tp);

        Animal(const Animal &other);            // copy constructor
        Animal &operator=(const Animal &rhs);   // copy assignment
        virtual ~Animal();                                // destructor

        // methods 
        virtual void        makeSound() const;

        // getter for tests
        const std::string   &getType() const;
};

#endif // ANIMAL_HPP
// end include guard