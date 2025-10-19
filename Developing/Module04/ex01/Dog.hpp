/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:28:11 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/18 23:24:05 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef DOG_HPP    // start include guard: prevent multiple inclusion
#define DOG_HPP    // define guard macro once for this translation unit

/* --------- PROJECT HEADERS --------- */
#include "Animal.hpp"      // Animal class for base class to inherit
#include "Brain.hpp"    // Brain class for base class       

class   Dog : public Animal {
    private:
        Brain *brain;
        
    public:
        // OCF - Orthodox Canonical Form
        Dog();                            // default constructor
        Dog(const Dog &other);            // copy constructor
        Dog &operator=(const Dog &rhs);   // copy assignment
        virtual ~Dog();                   // destructor

        // methods 
        virtual void  makeSound() const;

        // utils for tests
        void                setIdea(int i, const std::string &idea);
        const std::string   &getIdea(int i) const;
};

#endif // DOG_HPP
// end include guard