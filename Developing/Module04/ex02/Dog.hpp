/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparnahy <jparnahy@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:33:16 by jparnahy          #+#    #+#             */
/*   Updated: 2025/10/20 12:00:13 by jparnahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* --------- INCLUDE GUARD --------- */
// if not defined, define this.
#ifndef DOG_HPP
#define DOG_HPP

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