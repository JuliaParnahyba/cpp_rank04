/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:07:53 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/17 22:34:37 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef DOG_HPP    // start include guard: prevent multiple inclusion
#define DOG_HPP    // define guard macro once for this translation unit

/* --------- PROJECT HEADERS --------- */
#include "Animal.hpp"      // Animal class for base class to inherit

class   Dog : public Animal {
    public:
        // OCF - Orthodox Canonical Form
        Dog();                            // default constructor
        explicit Dog(const std::string &tp);

        Dog(const Dog &other);            // copy constructor
        Dog &operator=(const Dog &rhs);   // copy assignment
        virtual ~Dog();                   // destructor

        // methods 
        virtual void  makeSound() const;
};

#endif // DOG_HPP
// end include guard