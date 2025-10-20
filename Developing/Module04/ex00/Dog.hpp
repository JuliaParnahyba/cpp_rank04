/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:07:53 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 10:28:19 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef DOG_HPP
#define DOG_HPP

/* --------- PROJECT HEADERS --------- */
#include "Animal.hpp"      // Animal class for base class to inherit

class   Dog : public Animal {
    public:
        // OCF - Orthodox Canonical Form
        Dog();                            // default constructor
        Dog(const Dog &other);            // copy constructor
        Dog &operator=(const Dog &rhs);   // copy assignment
        virtual ~Dog();                   // destructor

        // methods/behavior
        virtual void  makeSound() const;
};

#endif // DOG_HPP
// end include guard